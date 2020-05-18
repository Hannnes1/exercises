/*
 *   Check for matching parentheses.
 *
 *
 *   See:
 *   - string_func.c
 *   - use_string_h.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")

// Return true of open and close is a matching pair of parentheses.
bool is_closing(char open, char close);

// Return index of ch in str. If not found return -1.
int index_of(const char *str, char ch);

// True if parentheses match
bool matches(const char *str);

int main(void) {

    EQUALS(matches("((()))"), true);
    EQUALS(matches("((())"), false);
    EQUALS(matches("(<({})>)"), true);
    EQUALS(matches("(<({)}>)"), false);
    EQUALS(matches("()<[]>{}"), true);

    return 0;
}

bool matches(const char *str) {
    int start = 0;
    int end = (int) strlen(str) - 1;

    while (start + 1 < end - 1) {
        while (!strchr("(<{[", str[start])); //Loopa till parantes framifrån
        while (!strchr(")>}]", str[end])); //Loopa till parantes bakifrån
        if (!is_closing(str[start], str[end])) {
            if (is_closing(str[start], str[start + 1]) && is_closing(str[end - 1], str[end])) {
                start++;
                end--;
            } else {
                return false;
            }
        }
        start++;
        end--;
    }
    //Everything matches if the loop finishes and the center char isn't a parentheses if the string is uneven length
    return !(strlen(str) % 2 != 0 && strchr("(<{[)>}]", str[start + 1]));
}

bool is_closing(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '<' && close == '>') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int index_of(const char *str, char ch) {
    // TODO
    return -1;   // Not found
}