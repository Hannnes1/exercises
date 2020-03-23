/*
 * 
 *   This demonstrates the if statement (if-satsen)
 *
 *   The if-statement select between different blocks to execute.
 *   Which block to execute depends on the outcome of a condition in parentheses.
 *   
 *   NOTE: We always uses blocks with if (i.e. {})!
 * 
 */
#include<stdio.h>


int main(void) {
    int input;
    printf("Input an integer > ");
    scanf("%d", &input);

    // ------- Example 1 ----------------------

    // if statement
    if (input > 0) {                  // If condition (input > 0) true ...
        printf("Don't know the value ...\n"); // ...execute block
        printf("... but it's bigger than 0\n");
    }
    // ... else continue here

    // ------- Example 2 ----------------------

    // if else statement
    if (input != 6) {                   // If true ..
        printf("Input was NOT 6\n");    // .. do this.
    } else {                            // ...else ...
        printf("Input was 6\n");        // ...do this
    }

    // ------- Example 3 ----------------------

    // if else if statement (if else ladder)
    // NOTE: If one true found, others not tested
    if (input == 1) {                   // If true ..
        printf("Input was 1\n");    // .. do this.
    } else if (input == 2) {            // .. else if true ...
        printf("Input was 2\n");    // .. do this.
    } else if (input == 3) {            // .. else if true ...
        printf("Input was 3\n");    // .. do this.
    } else if (input == 4) {            // .. else if true ...
        printf("Input was 4\n");     // .. do this
    } else {                        // ...else ...
        printf("Input was not 1-4 (incl.)\n");// ...do this
    }

    // ------- Example 4 (a bad one) ----------

    // BAD, BAD, BAD!! Must use == (2 equal signs for equals)
    if (input = 4) {      // NOTE: yellow warning from CLion, good!
        printf("BAD, BAD, BAD, Always true\n");
    }

    return 0;

}