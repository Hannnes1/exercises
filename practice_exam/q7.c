#include <stdio.h>
#include <stdbool.h>

void intersection(int *is, int size_is, const int *a, int size_a, const int *b, int size_b);

bool arr_contains(int n, const int *arr, int size);

void add_common(int *is, const int *large, int large_size, const int *small, int small_size);

        int main() {
    int a[] = {5, 4, 2, 3};
    int b[] = {5, 1, 2, 2, 3};
    int is[] = {0, 0, 0, 0};

    intersection(is, sizeof(is) / sizeof(int), a, sizeof(a) / sizeof(int), b, sizeof(b) / sizeof(int));

    return 0;
}

void intersection(int *is, int size_is, const int *a, int size_a, const int *b, int size_b) {

    if (size_a > size_b) { //Always iterate through longest array
        add_common(is, a, size_a, b, size_b);
    } else {
        add_common(is, b, size_b, a, size_a);
    }
}

bool arr_contains(int n, const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return true;
        }
    }
    return false;
}

void add_common(int *is, const int *large, int large_size, const int *small, int small_size) {
    int is_index = 0;
    for (int i = 0; i < large_size; i++) {
        if (arr_contains(large[i], small, small_size) && !arr_contains(large[i], is, small_size)) {
            is[is_index++] = large[i];
        }
    }
}