/*
         Exercising string functions.

    See:
    - string_func.c

 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define STR_EQUALS(s1, s2) printf( strcmp(s1, s2) == 0 ? "true\n" : "false\n")

#define SIZE 20

// Count number of character ch in str
int count(const char *str, char ch);

// Convert string to lowercase and return it (i.e. return changed original)
// This uses ASCII codes. The difference between upper case and lower case
// letters is 32 (ASCII code for space). Just need to consider the english alphabet (A-Z)
char *to_lower(char *str);

// Reverses string src. Result in dest
void reverse(char *dest, const char *src);

// Remove leading and trailing space in str.
// Should return a new (dynamically allocated) string
char *trim(const char *str);

int main(void) {

    EQUALS(count("a b c  de", ' '), 4);
    EQUALS(count("a   b   ", ' '), 6);

    char str1[] = "ABCDE?";
    STR_EQUALS(to_lower(str1), "abcde?");
    char str2[] = "OOpssHhh!";
    STR_EQUALS(to_lower(str2), "oopsshhh!");

    char tmp[strlen(str1) + 1];    // +1 because of '\0'
    reverse(tmp, str1);
    STR_EQUALS(tmp, "?edcba");

    char str[] = "   abcde  ";     // 3 spaces before and 2 after
    char *ptr = trim(str);
    EQUALS(str == ptr, false);     // Get new dynamically allocated string
    STR_EQUALS(ptr, "abcde");

    return 0;
}

// -------- Function definitions ----------------

int count(const char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}


char *to_lower(char *str) {
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] > 64 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

void reverse(char *dest, const char *src) {
    int new_i = (int) strlen(src);
    dest[new_i--] = 0;
    for (int i = 0; src[i] != 0; i++) {
        dest[new_i--] = src[i];
    }
}

char *trim(const char *str) {
    int spaces_before = 0;
    int spaces_after = 0;
    for (int i = 0; str[i] == ' '; i++) {
        spaces_before++;
    }
    for (int i = (int) strlen(str) - 1; str[i] == ' '; i--) {
        spaces_after++;
    }
    char *new = malloc(strlen(str) - (spaces_after + spaces_before));
    for (int i = spaces_before; i < strlen(str) - spaces_after; i++) {
        new[i - spaces_before] = str[i];
    }
    return new;
}