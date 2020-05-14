/*
 *   Using ctype.h and string.h standard C library (API)
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>   // Must have

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define STR_EQUALS(s1, s2) printf( strcmp(s1, s2) == 0 ? "true\n" : "false\n")

#define MAX_STR 10

int main(void) {

    char str[] = "abc";

    // Using string.h
    EQUALS(strlen(""), 0);        // Length of string excluding '\0'
    EQUALS(strlen(str), 3);

    // See https://www.ascii-code.com/
    EQUALS(strcmp(str, "abc") == 0, true);   // Compare strings
    EQUALS(strcmp(str, "abcX") < 0, true);   // Warning??
    EQUALS(strcmp("abcX", str) > 0, true);
    EQUALS(strcmp("Abc", str) < 0, true);    // A is before a

    char tmp[MAX_STR];
    strcpy(tmp, "123abc");
    //strncpy(tmp, "123abc", MAX_STR);    // Assign (copy) strings
    STR_EQUALS(tmp, "123abc");

    tmp[0] = 0;           // Erase!!!
    strcat(tmp, "qw");    // Concatenate
    strcat(tmp, "qw");
    //strncat(tmp, "qw", 2);
    STR_EQUALS(tmp, "qwqw");

    EQUALS(strchr("abcdef", 'a') != NULL, true);     // Search. Is 'a' in string? If so address to first occurrence...
    EQUALS(strchr("abcdef", 'X') == NULL, true);     // ... else NULL (Note: NULL)

    // Many more functions see Book and web.

    return 0;
}


