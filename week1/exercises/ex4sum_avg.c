/*
 *
 *  Sum and Average for n numbers
 *
 *  NOTE: The ending -1 should not be included.
 *
 * Samples:
 * - nested_stmt.c
 */
#include<stdio.h>
#include<stdbool.h>

int main(void) {
    
    int input;
    int sum = 0;
    double avg = 0;
    int count = 0;

    printf("Calculate sum and average (-1 to quit)\n");
  
    // -- Input (and bookkeeping) ---------
    
    while (true){
        printf(">");
        scanf("%d", &input);
        if(input == -1){
            break;
        }
        sum += input;
        count++;
    }

    // -- Process---

    avg = (double)sum/count;

    // -- Output ----
    printf("Sum = %d Avg = %f", sum, avg );

    return 0;
}
