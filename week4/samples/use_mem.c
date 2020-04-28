/*
 *      Standard C library functions for array handling
 *      (there are more ...)
 */

#include<stdio.h>
#include <memory.h>

#define MAX 10

void print_arr(const int *arr, int size);

int main(void) {

    int dest[MAX];
    int src[] = {1, 2, 3, 4, 5};

    // ----- Assign ----------------
    memcpy(dest, src, MAX * sizeof(int));  // Memory may not overlap
    print_arr(dest, 10);

    memmove(dest + 5, dest, MAX / 2 * sizeof(int)); // Overlapping
    print_arr(dest, 10);

    // --- Compare ---------
    int tmp[MAX] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    printf("%d\n", memcmp(dest, tmp, MAX * sizeof(int))); // 0 means equals!

    // ----- Search ------------
    int *ptr = memchr(dest, 4, MAX * sizeof(int));  // 0 seems to be a problem!
    if (ptr != NULL) {
        printf("Found %d\n", *ptr);
    } else {
        printf("Not found\n");
    }

    // ----- Initialize -----------------
    memset(dest, 0, MAX * sizeof(int));
    print_arr(dest, 10);

    return 0;
}


// ----------- Helper method -----------------

void print_arr(const int *arr, int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size - 1]);
}
