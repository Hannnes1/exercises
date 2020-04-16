/*
 *  Sum 1 - n introducing the for-loop
 *
 *
 *  Samples:
 *  - for_stmt.c
 */
#include<stdio.h>

int main(void) {
    int sum = 0;
    int n;

    printf("Program to sum 1-n\n");
    printf("Input n > ");
    scanf("%d", &n);


    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("Sum 1 to %d = %d\n", n, sum); // .. else continue here

    return 0;
}