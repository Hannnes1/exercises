/*
 *  Functions with pointer parameters
 *
 *  Using pointer parameters makes it possible to alter
 *  a variable OUTSIDE the function (useful and dangerous)!!!
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Try to inc parameter n, non-working version
void inc(int n);

// Try to inc parameter n using address, working version
void inc2(int *ptr);

// Try to inc parameter n using address, working, send address as return value
int *inc3(int *ptr);

// Try to get an address to local variable in function (BAAAD!!!)
int *get_address();

int main(void) {
    int n = 123;
    printf("Before %d\n", n);
    inc(n);                   // Sending a copy of value to function
    printf("After %d\n", n);

    printf("Before %d\n", n);
    inc2(&n);                 // Passing address!
    printf("After %d\n", n);

    printf("Inc 3 %d\n", *inc3(&n)); // Return value an address, dereference to get variable.


    int *adr = get_address();
    //printf("Using address to non-existing variable %d\n", *adr);  // Program crash here

    return 0;
}

// ------------- Function definitions --------------

void inc(int n) {
    n++;       // Just increment local variable, n in main not affected
}

// Functions has pointer parameter
// n parameter will hold address to n variable in main
void inc2(int *ptr) {
    *ptr = *ptr + 1;
    //(*ptr)++;     // Or like this .Parentheses because of precedence
}

int *inc3(int *ptr) {
    *ptr = *ptr + 1;
    return ptr;
}

// BAD, BAD, BAD ... variable gone after call
// Returning address to non existing variable!
int *get_address() {
    int i = 123;
    return &i;
}