/*
 *
 *     Read, transpose and print a matrix
 *
 *  Samples:
 *  - matrix.c
 */

#include<stdio.h>

#define ROWS 2   // Possibly try other value
#define COLS 3

int main(void) {
    int matrix[ROWS][COLS];
    int transpose[COLS][ROWS];

    // --- In -------------
    printf("Program to transpose matrix\n");
    printf("Input a %d x %d matrix\n", ROWS, COLS);

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("Input %d %d >", r, c);
            scanf("%d", &matrix[r][c]);
        }

    }

    // ---- Process ----------

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            transpose[c][r] = matrix[r][c];
        }
        printf("\n");
    }

    // ------ Out ------------------

    printf("Matrix is\n");
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    printf("Transpose is\n");

    for (int r = 0; r < COLS; r++) {
        for (int c = 0; c < ROWS; c++) {
            printf("%d ", transpose[r][c]);
        }
        printf("\n");
    }

    return 0;
}


