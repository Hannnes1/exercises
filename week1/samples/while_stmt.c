/*
 *
 *   This demonstrates the while statement (while-satsen, while-loop)
 *
 *   The while-statement repeat a block 0-many times.
 *   Repetition depends on the outcome of the condition in parentheses
 *   If true the repetition continues else program continues after the block.
 *   
 *   NOTE: We always use blocks with while!
 *
 */
#include<stdio.h>
#include<stdbool.h>

int main(void) {
    int input;
    printf("Input an integer 5-10 > ");
    scanf("%d", &input);

    // ------- Example 1 ----------------------

    int i = input;  // i is the loop variable, used to terminate the loop
    while (i < 15) {            // If true ...
        printf("i = %d, ", i);   // ... do this.
        i++;        // Increment loop variable to make condition false
        // Normally change loop variable last.
    }
    printf("Loop ended i >= %d\n", i); // ...if false continue here

    // ------- Example 2 ----------------------

    i = input;
    while (i >= 0) {
        printf("i = %d, ", i);
        i--;                   // Counting down
    }
    printf("Loop ended i == %d\n", i);

    // ------- Example 3 ----------------------

    i = input;
    while (i < 10) {
        printf("i = %d, ", i);
        i = i + 2;       // Step by 2

    }
    printf("Loop ended i >= %d\n", i); // .. if false continue here

    // ------- Example 4 ----------------------
    // Using the break statement

    i = input;
    while (true) {    // Always true, loop infinite
        printf("i = %d, ", i);
        if (i > 10) {
            break;   // Jump directly out of loop ...
        }
        i++;
    }
    // ... to here.
    printf("Loop ended i > %d\n", i);

    // ------- BAAAD 1 ----------------------
    /*
    i = input;
    while (i < 15) {
        printf("i = %d, ", i);
        // Forgot i++, will newer terminate!! Warning
    }
    */

    // ------- BAAAD 2 ----------------------

    /*
    i = input;
    while (i < 15); {    //<-------- NO semi colon here (warning)
        printf("i = %d, ", i);
        i++;
    }
    */


    return 0;
}