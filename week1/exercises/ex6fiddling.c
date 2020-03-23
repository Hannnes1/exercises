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

int pow_int(int base, int exp);


int main(void) {

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

    return 0;
}

// ----------------- Function definitions ---------------------

int n_digits(int number) {
    int sum = 0;
    while (number > 0) {
        sum++;
        number /= 10;
    }
    return sum;
}

bool digit_is_in(int number, int digit) {
    bool res = false;
    while (number > 0) {
        if (number % 10 == digit) {
            res = true;
        }
        number /= 10;
    }
    return res;
}

int get_digit_at_index(int number, int index) {
    int currentIndex = n_digits(number);
    int digit = 0;
    while (number > 0) {
        if (index == --currentIndex) {
            digit = number % 10;
        }
        number /= 10;
    }
    return digit;
}

int swap(int number, int from_index, int to_index) {
    int num1 = get_digit_at_index(number, from_index);
    int num1Multiplier = pow_int(10, n_digits(number) - from_index - 1);
    int num2 = get_digit_at_index(number, to_index);
    int num2Multiplier = pow_int(10, n_digits(number) - to_index - 1);

    return (number - num1 * num1Multiplier - num2 * num2Multiplier + num1 * num2Multiplier + num2 * num1Multiplier);
}

int pow_int(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; ++i) {
        res *= base;
    }
    return res;
}
