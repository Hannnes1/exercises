/*
 *
 *  Fiddling with int's, move digits around etc.
 *
 *  HINT: Heavy use of % (modulo = remainder) and / (integer division)
 *
 *  Samples:
 *  - functions.c
 *  - operators.c
 */

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// Test macros
#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")

// --------------- Function declarations ------------------------

// How many digits in number?
int n_digits(int number);

// Is the digit in this number?
bool digit_is_in(int number, int digit);

// Get digit for the position "index" (index starts at 0, from left)
int get_digit_at_index(int number, int index);

// Swap two digits in a number using indices like above
int swap(int number, int from_index, int to_index);


int main(void) {

    // TODO Uncomment one at a time, all should print true
    /*
    EQUALS(n_digits(123), 3);   // 123 has 3 digits
    EQUALS(n_digits(12345), 5);
    EQUALS(n_digits(1023945), 7);

    EQUALS(get_digit_at_index(12345, 0), 1);   // Digit at index 0 is 1
    EQUALS(get_digit_at_index(12345, 2), 3);
    EQUALS(get_digit_at_index(12345, 4), 5);

    EQUALS(digit_is_in(2637, 2), true);   // Yes 2 is in 2637
    EQUALS(!digit_is_in(2637, 4), true);  // No 4 is not in 2637

    EQUALS(swap(12345, 2, 3), 12435);  // Swap index 2 and 3.
    EQUALS(swap(12345, 0, 4), 52341);
    EQUALS(swap(12345, 4, 4), 12345);
    EQUALS(swap(12345, 3, 3), 12345);
    */
    return 0;
}

// ----------------- Function definitions ---------------------

int n_digits(int number) {
   // TODO 
}

// TODO Add more function definitions
