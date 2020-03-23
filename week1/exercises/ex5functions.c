/*
 *  Functions
 *
 *  Samples:
 *  - functions.c
 */

#include<stdio.h>
#include<stdlib.h>

// Test macros
// EQUALS will print true if v1 and v2 are equal
#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
// EPS_EQUALS will print true if difference of v1 and v2 is less than 0.0001
#define EPS_EQUALS(v1, v2) printf(abs((v1)-(v2)) < 0.0001 ? "true\n" : "false\n")

#define PI 3.1415926

// ------------- Function declarations -------------

// The square function
int square(int i);

// The average of 3 floats.
float avg(float i, float j, float k);

// This is the same as ex1bmi. Just make a function out of it
float bmi(float weight, float height);

// This is about the same as ex2deg_rad.
float deg_to_rad(float deg);

// Absolute value
int absolute(int i);

// This is the same as ex3factorial.
long factorial(int n);

// The power function for positive int's only
int pow_int(int base, int exp);

// The som of the digits in some number
int digit_sum(int number);

/*
 *  Just testing the functions not a meaningful program
 */
int main(void) {

    // TODO This should print true
    EQUALS(square(4), 16);     // 4² should be 16
    EQUALS(square(-2), 4);

    // TODO Uncomment one at a time, all should print true
    /*
    EPS_EQUALS(avg(1.0, 1.0, 1.0), 1.0);   // Average is 1.0
    EPS_EQUALS(avg(1.5, 2.0, 4.0), 2.5);

    EPS_EQUALS(bmi(70, 1.70), 24.2214);
    EPS_EQUALS(bmi(80, 1.60), 31.2500);

    EPS_EQUALS(deg_to_rad(0), 0);
    EPS_EQUALS(deg_to_rad(90), 1.5708);

    EQUALS(absolute(12), 12);      // Absolute of 12 is 12
    EQUALS(absolute(0), 0);
    EQUALS(absolute(-4), 4);

    EQUALS(factorial(1), 1);
    EQUALS(factorial(3), 6);
    EQUALS(factorial(15), 1307674368000);  // Need long for result!

    EQUALS(pow_int(2, 4), 16);
    EQUALS(pow_int(1, 23), 1);
    EQUALS(pow_int(4, 0), 1);

    EQUALS(digit_sum(11111), 5);
    EQUALS(digit_sum(12345), 15);
    */
    return 0;
}


// ------------- Function definitions -------------
// Below you implement the functions

int square(int i) {
    // TODO;
}

// TODO Add function definitions here