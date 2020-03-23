/*
 * Using a random number generator
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    srand((unsigned int) time(NULL)); // Initialize random number generator by reading system time

    int r = rand();     // Call rand() to get the random number.
    printf("%d\n", r);  // Big random int number!

    r = rand() % 10;    // Scale to range 0-9
    printf("%d\n", r);

    r = rand() % 6 + 1;    // Make a dice (1-6)
    printf("%d\n", r);

    int i = 0;
    while (i < 20) {
        r = rand() % 6 + 1;    // Roll dice many times
        printf("%d ", r);
        i++;
    }

    return 0;
}