/*
 *
 *     Read, transpose and print a matrix
 *
 *  Samples:
 *  - matrix.c
 */

#include<stdio.h>

#define ROWS 2   // Possibly try other value
#define COLS 2

int main(void) {
    int matrix[ROWS][COLS];
    int transpose[ROWS][COLS];

    // --- In -------------
    printf("Program to transpose matrix\n");

    // TODO

    // ---- Process ----------

    // TODO

    // ------ Out ------------------

    printf("Matrix is\n");
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    printf("Transpose is\n");

    // TODO

    return 0;
}


