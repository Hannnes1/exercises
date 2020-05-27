#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count(int start);

int main() {
    srand((unsigned) time(NULL));

    int start = (rand() % 100) + 1;

    printf("Räkna uppåt från och med %d (enter efter varje, avsluta med 0)\n", start);

    int end = count(start);

    printf("Du kunde räkna från %d till %d", start, end);
}

int count(int start) {
    int current = start;
    int input = 0;
    do {
        printf(">");
        scanf("%d", &input);
    } while (input == current++);
    return current - 2;
}

