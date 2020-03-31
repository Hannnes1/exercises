/*
 *    Loop puzzlers, exercising nested while loops
 *
 *    Will print "patterns"
 *
 *   See:
 *   - puzzlers.c
 *
 */
#include<stdio.h>

int main(void) {

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }

    printf("\n");    // Layout

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        printf("XXXXXXXXXX\n");
    }

    return 0;

}