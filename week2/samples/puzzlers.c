/*
 *     Use nested loops to plot a pattern.
 */
#include<stdio.h>

int main(void) {

    // Plot a half square
    int i = 0;
    while (i < 10) {
        int j = 10;
        while (j > i) {  // j depends on i
            printf("X");
            j--;
        }
        printf("\n");
        i++;
    }
    return 0;
}