/*
 *   Summing the harmonic series: 1 + 1/2 + 1/3 + 1/4 + ...
 *
 *   See: https://en.wikipedia.org/wiki/Harmonic_series_(mathematics)
 */
#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define EQUALS(v1, v2) printf( (v1) == (v2) ? "true\n" : "false\n")

int n_terms(double limit);

int main(void) {

    // How many terms from harmonic series to exceed some limit
    EQUALS(n_terms(1), 2);   // Limit is 1, two terms will do
    EQUALS(n_terms(1.7), 3); // Limit is 1.7, need 3 terms
    EQUALS(n_terms(7), 616);

    return 0;
}

int n_terms(double limit) {
    double sum = 0;
    int i = 1;
    while (sum <= limit) {
        sum = sum + 1 / (double) i;
        i++;
    }
    return i - 1;
}





