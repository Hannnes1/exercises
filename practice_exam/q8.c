#include <stdio.h>

typedef struct Complex {
    int real;
    int imaginary;
} complex_t;

void addc(complex_t *sum, const complex_t *a, const complex_t *b);

int main() {

    complex_t a = {2, 3};
    complex_t b = {-4, 1};
    complex_t sum = {0, 0};

    addc(&sum, &a, &b);

    printf("%d + %di", sum.real, sum.imaginary);

}

void addc(complex_t *sum, const complex_t *a, const complex_t *b) {
    sum->real = a->real + b->real;
    sum->imaginary = a->imaginary + b->imaginary;
}