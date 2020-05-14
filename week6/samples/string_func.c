/*
 * 
 *   Some examples of string functions
 *   
 *   For IO functions, see ex1word_count.c (at end)
 * 
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define STR_EQUALS(s1, s2) printf( strcmp(s1, s2) == 0 ? "true\n" : "false\n")

#define SIZE 8

// Lenght of a string
int str_length(const char str[]);

// Replace all occurrences of some char
char *replace_all(char *str, const char original, char replacement);

// Generate a string some char with some length
char *generate(char ch, int len);

int main(void) {

    EQUALS(str_length("abcdef"), 6);
    EQUALS(str_length("? =09hyr"), 8);

    char str[] = "aXbXXcXdX";
    STR_EQUALS(replace_all(str, 'X', 'Y'), "aYbYYcYdY");

    char *ptr = generate('a', 5);
    STR_EQUALS(ptr, "aaaaa");

    return 0;
}

int str_length(const char *str) {
    int i = 0;
    while (str[i] != 0) {  // Strings must end in '\0'
        i++;
    }
    return i;
}


char *replace_all(char *str, const char original, char replacement) {
    int i = 0;
    while (str[i] != 0) {
        if (str[i] == original) {
            str[i] = replacement;
        }
        i++;
    }
    return str;
}


char *generate(char ch, int len) {
    // Dynamically allocate the string
    char *p = malloc((len + 1) * sizeof(char));
    int i;
    for( i = 0; i < len ; i++){
        p[i] = ch;
    }
    p[i] = 0;  // Add manually
    return p;
}


// ----------------- Test helper methods -------------------------

