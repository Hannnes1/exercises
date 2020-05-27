#include <stdio.h>
#include <string.h>

#define VOWELS "aouåeiyäöAOUÅEIYÄÖ"

void double_vowels(char dest[], const char src[]);

int main() {
    char dest[20];

    double_vowels(dest, "abcdE");
    printf("%s\n", dest);
    double_vowels(dest, "ooouuu");
    printf("%s\n", dest);
    double_vowels(dest, "bdfgh");
    printf("%s\n", dest);
}

void double_vowels(char dest[], const char src[]) {
    int j = 0;
    for (int i = 0; src[i] != 0; i++) {
        dest[j++] = src[i];
        if (strchr(VOWELS, src[i]) != NULL) {
            dest[j++] = src[i];
        }
    }
    dest[j] = 0;
}