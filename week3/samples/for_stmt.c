/*
 * 
 *  The for statement (for-loop)
 *
 *  Logic same as in while statement but everything written on one line
 * 
 */

#include<stdio.h>

int main(void) {
    int input;
    printf("Input an integer 5-10 > ");
    scanf("%d", &input);

    // ------- Example 1 ----------------------

    for (int i = 0; i < input; i++) {  // int i = 0 done once! If i < input true ...
        printf("i = %d, ", i);        // .. do this.
        // i++ is done here albeit written on first line of loop!
    }
    // .. if false continue here
    printf("\n");     // Just layout 

    //printf("%d\n", i);  // Scope for i is the for-loop, not visible here

    // ------- Example 2 ----------------------

    for (int i = input; i > 0; i--) {
        printf("i = %d, ", i);        // Counting down
    }
    printf("\n");     // Just layout 
    
    // ------- Example 3 ----------------------

    for (int i = 0; i < 10; i = i + 2) {   // Step by 2
        printf("i = %d, ", i);
    }
    printf("\n");     // Just layout 

     // --------- Example 4 (BAD) -----------

    for (int i = 0; i < 10, i++;) {      //<--- NO comma in for-loop!!! No semicolon last!
        printf("%d, ", i);
    }



    return 0;
}