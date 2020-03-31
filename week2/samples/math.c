/*
 *   Using C math library
 *   See https://en.wikipedia.org/wiki/C_mathematical_functions
 *
 */
#include<stdio.h>
#include<math.h>      // Header file for math
#include <stdlib.h>   // abs

int main(void) {

    // Some constants
    printf("%f\n", M_PI);
    printf("%f\n", M_E);

    // Some of the functions
    double result, value;
    printf("Input a double value > ");
    scanf("%lf", &value);
    result = sqrt(value);
    printf("The square root of %.2f is %.2f\n", value, result);
    result = pow(value, 3);
    printf("%.2f to the 3rd power is %.2f\n", value, result);
    result = floor(value);
    printf("The floor of %.2f is %.2f\n", value, result);
    result = ceil(value);
    printf("And the ceiling of %.2f is %.2f\n", value, result);
    result = round(value);
    printf("And the round of %.2f is %.2f\n", value, result);
    result = fabs(value);
    printf("And the absolute value of %.2f is %.2f\n", value, result);

    // NOTE: abs in stdlib.h NOT in math.h
    int i = -5;
    int j = abs(i);  // Only support int's
    printf("And the absolute value of %d is %d\n", i, j);

    return 0;
}

