/*
 *
 *     Functions with array parameter(s)
 *
 *   Samples:
 *   - matrix_func.c
 */

#include<stdio.h>
#include<stdbool.h>
#include<memory.h>
#include <stdlib.h>

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define ARR_EQUALS(a1, a2) printf( memcmp(a1, a2, sizeof(a1)) == 0 ? "true\n" : "false\n")

#define ROWS 3
#define COLS 3

// Count how many elements in matrix greater or equal to limit
int count_gte(int n_rows, int n_cols, const int matrix[][n_cols], int limit);

// Is the row and col inside the matrix? If so return true else false
bool is_valid_location(int n_rows, int n_cols, int row, int col);

// Convert array to matrix
// Note: array size must be n_rows * n_cols
void array_to_matrix(int n_rows, int n_cols, int matrix[][n_cols], const int arr[]);

// Sum of all neighbours of position (row, col) in matrix
int sum_neighbours(int n_rows, int n_cols, const int matrix[][n_cols], int row, int col);


int main(void) {
    int matrix[ROWS][COLS] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
    };


    EQUALS(count_gte(ROWS, COLS, matrix, 4), 6);
    EQUALS(count_gte(ROWS, COLS, matrix, 9), 1);

    EQUALS(is_valid_location(ROWS, COLS, 0, 0), true);
    EQUALS(is_valid_location(ROWS, COLS, ROWS - 1, COLS - 1), true);
    EQUALS(is_valid_location(ROWS, COLS, -1, 2), false);
    EQUALS(is_valid_location(ROWS, COLS, 3, 0), false);


    int m2[2][2];
    int arr2[] = {0, 3, 7, 5};         // Size = 2 * 2
    array_to_matrix(2, 2, m2, arr2);
    int expected2[] = {0, 3};
    ARR_EQUALS(m2[0], expected2);
    int expected3[] = {7, 5};
    ARR_EQUALS(m2[1], expected3);

    EQUALS(sum_neighbours(ROWS, COLS, matrix, 0, 0), 11); // 2+4+5
    EQUALS(sum_neighbours(ROWS, COLS, matrix, 1, 1), 40); // 1+2+3+4+6+7+8+9
    EQUALS(sum_neighbours(ROWS, COLS, matrix, 2, 2), 19); // 5+6+8

    return 0;
}

// Should use for-loops
int count_gte(int n_rows, int n_cols, const int matrix[][n_cols], int limit) {
    int count = 0;
    for (int r = 0; r < n_rows; r++) {
        for (int c = 0; c < n_cols; c++) {
            if (matrix[r][c] >= limit) {
                count++;
            }
        }

    }
    return count;
}

bool is_valid_location(int n_rows, int n_cols, int row, int col) {
    if (row < n_rows && row >= 0 && col < n_cols && col >= 0)
        return true;
    else
        return false;
}

// Should use for-loop
void array_to_matrix(int n_rows, int n_cols, int matrix[][n_cols], const int arr[]) {
    int i = 0;
    for (int r = 0; r < n_rows; r++) {
        for (int c = 0; c < n_cols; c++) {
            matrix[r][c] = arr[i];
            i++;
        }

    }
}

// Should use for-loops
int sum_neighbours(int n_rows, int n_cols, const int matrix[][n_cols], int row, int col) {
    int sum = 0;
    for (int r = 0; r < n_rows; r++) {
        if (abs(r - row) <= 1) {
            for (int c = 0; c < n_cols; c++) {
                if (abs(c - col) <= 1 && !(row == r && col == c)) {
                    sum += matrix[r][c];
                }
            }
        }
    }
    return sum;
}


