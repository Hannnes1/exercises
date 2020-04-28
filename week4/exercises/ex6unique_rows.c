/*
 *   How many unique elements in sorted array?
 *
 */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define ROWS 4
#define COLS 4

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")


// TODO Declarations of helper methods

int unique_rows(int n_rows, int n_cols, const int matrix[][n_cols]);

void print_arr(const int *arr, int size);

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
            {7, 1, 3, 9},
            {7, 1, 3, 9},
    };

    // TODO Testing of helper methods

    EQUALS(unique_rows(ROWS, COLS, m1) == 4, true);
    EQUALS(unique_rows(ROWS, COLS, m2) == 2, true);

    return 0;
}



int unique_rows(int n_rows, int n_cols, const int matrix[][n_cols]) {
    // TODO
}

// TODO Definitions of helper methods


// ----------- Helper method -----------------

void print_arr(const int arr[], int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size - 1]);
}