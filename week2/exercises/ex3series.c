/*
 *   Calculate PI using the Gregory-Leibniz Series
 *   see https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80
 *
 * Samples:
 * - series.c
 */
#include<stdio.h>

double calculate_pi(int n_terms);

int main(void) {
    int n_terms;
    double pi;

    printf("Calculate PI. How many terms? > ");
    scanf("%d", &n_terms);
    pi = calculate_pi(n_terms);
    printf("PI with %d terms gives %f\n", n_terms, pi);

    return 0;
}

double calculate_pi(int n_terms) {
    int divider = 1;
    double result = 0;
    for (int i = 0; i < n_terms; i++) {
        i % 2 == 0 ? (result += 1.0 / divider) : (result -= 1.0 / divider);
        divider += 2;
    }
    return result * 4;
}


