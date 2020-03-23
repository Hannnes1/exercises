/*
 *   Examples of functions.
 */
#include<stdio.h>

// --------- This i function declarations (declared before use in main)  ---------

// Get last digit in number
int last_digit(int number);

// Is number even?
int is_even(int number);

// Convert Celsius to Fahrenheit
float c2f(float celsius);

// Max of two ints
int max(int a, int b);

// Get Fibonacci number n, see https://en.wikipedia.org/wiki/Fibonacci_number
long fibonacci(int n);

// -------------- main ----------------------------

int main(void) {
    // Functions declare above, so possible to use here.
    printf("Last digit in 2358 is %d\n", last_digit(2358));
    printf("Is 123 even? %d\n", is_even(123));
    printf("32 deg Celsius is %f Fahrenheit.\n", c2f(32));
    printf("Max of 2 and 6 is %d\n", max(2, 6));

    printf("Some Fibonacci numbers %ld, ", fibonacci(1));
    printf("%ld, ", fibonacci(5));
    printf("%ld\n", fibonacci(20));

    // Parameter expressions evaluated before call
    int i = 12;
    int j = 34;
    printf("Last digit is %d\n", last_digit(i + j));
    printf("Fibonacci number is %ld, ", fibonacci(i - 6));


    return 0;

}

// ----------- Function definitions (where the real work is done) --------------

int last_digit(int number) {
    return number % 10;
}

int is_even(int number) {
    return number % 2 == 0;
}

float c2f(float celsius){
    // Expression is of type double, cast to float
    // CLion will warn if not ... good.
   return (float) (celsius * (9.0 / 5) + 32); 
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// 1, 1, 2, 3, 5, 8, 13, ... etc.  Assume n > 0.
long fibonacci(int n) {
    long t1 = 0, t2 = 1, next;
    int i = 0;
    while (i < n) {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        i++;
    }
    return t1;
}



