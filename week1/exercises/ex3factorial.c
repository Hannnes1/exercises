/*
 *
 *  Calculate factorial using while loops
 *
 * Samples:
 * - while_stmt.c
 *
 */
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int main(void) {
    int number;
    long factorial = 1;

    printf("Enter an integer (less than 20) > ");
    scanf("%d", &number);

    int i = number;
    while(i > 0){
        factorial *= i;
        i--;
    }
    
    printf("Factorial = %ld", factorial);
    return 0;
}
