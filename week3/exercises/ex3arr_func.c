/*
 *     Functions with array parameter(s)
 *
 *   Samples:
 *  - arr_func.c
 */

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<memory.h>
#include<math.h>

// Test macros
#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define ARR_EQUALS(a1, a2) printf( memcmp(a1, a2, sizeof(a1)) == 0 ? "true\n" : "false\n")

// -------- Declarations ---------------

// How many values (to_count) are there in arr?
int count(const int arr[], int size, int value);

// Return index of to_find in arr if not found return -1
int find(const int arr[], int size, int value);

// Set percent_one % of array to 1, others to 0
void distribute(int arr[], int size, double percent_one);

// Randomly reorder elements (a permutation)
void shuffle(int arr[], int size);

// Helper method
void print_arr(const int arr[], int size);

int main(void) {
    int arr[] = {4, 1, 5, 3, 6, 3, 1, 9};

    // Standard way of getting size of array
    // NOTE: Will not work if send arr as parameter to functions
    // because C will convert array to address to first elem!
    int size1 = sizeof(arr) / sizeof(arr[0]);

    EQUALS(count(arr, size1, 6), 1);     // There's one 6
    EQUALS(count(arr, size1, 3), 2);

    EQUALS(find(arr, size1, 4), 0);      // 4 is at index 0
    EQUALS(find(arr, size1, 5), 2);
    EQUALS(find(arr, size1, 99), -1);

    int a2[10];
    int size2 = sizeof(a2) / sizeof(a2[0]);  // Standard idiom (not really necessary)
    distribute(a2, size2 , 0.2);
    int expected1[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}; // The expected answer, 20% one's
    ARR_EQUALS(a2, expected1);       // Are a2 and expected1 the same? If so print true.

    distribute(a2, size2, 0.5);
    int expected2[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0};  // 50% one's
    ARR_EQUALS(a2, expected2);

    distribute(a2, size2, 0.75);   // Rounded
    int expected3[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0};
    ARR_EQUALS(a2, expected3);

    shuffle(arr, size1);            // Reorder randomly (permutation)
    print_arr(arr, size1);          // Use ocular inspection of output
    shuffle(arr, size1);
    print_arr(arr, size1);
    shuffle(arr, size1);
    print_arr(arr, size1);

    return 0;
}

// ------ Implementations -----------------

int count(const int arr[], int size, int value) {
   // TODO
}

int find(const int arr[], int size, int value) {
    // TODO
}

void distribute(int arr[], int size, double percent_one) {
    // TODO
}

/*  Fisher- Yates algorithm
    https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
 */
void shuffle(int arr[], int size) {
   // TODO
}

// ----------- Helper method -----------------

void print_arr(const int arr[], int size){
    printf("[");
    for( int i = 0 ; i < size-1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size-1]);
}

