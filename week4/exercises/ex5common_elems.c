/*
 *   Get common elements for all rows in matrix
 *   with positive integer elements
 *
 */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<memory.h>

#define ROWS 4
#define COLS 4

#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

// Test macros
#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define ARR_EQUALS(a1, a2) printf( memcmp(a1, a2, sizeof(a1)) == 0 ? "true\n" : "false\n")

// TODO Declarations of helper methods

void get_common_row_elems(int n_rows, int n_cols, const int matrix[][n_cols], int *common);

int main(void) {

    int m1[ROWS][COLS] = {
            {7, 1, 3, 6},
            {6, 2, 7, 1},
            {8, 9, 1, 3,},
            {5, 6, 9, 1},
    };
    int m2[ROWS][COLS] = {
            {7, 1, 3, 9},
            {6, 9, 7, 1},
            {7, 9, 1, 3,},
            {5, 7, 9, 1},
    };


    // TODO Testing of helper functions

    int expected[] = {1, 0, 0, 0};  // Padded with 0's
    int result[COLS];
    get_common_row_elems(ROWS, COLS, m1, result);
    ARR_EQUALS(result, expected);


    int expected2[] = {7, 1, 9, 0};  // Padded with 0's
    int result2[COLS];
    get_common_row_elems(ROWS, COLS, m2, result2);
    ARR_EQUALS(result2, expected2);

    return 0;
}

// Get all elements present on all rows
void get_common_row_elems(int n_rows, int n_cols, const int matrix[][n_cols], int *common) {
   // TODO
}


// TODO Helper functions



// ----------- Helper method -----------------

void print_arr(const int arr[], int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size - 1]);
}