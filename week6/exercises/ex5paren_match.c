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
bool matches(const char *str);  // TODO change name

int main(void) {

    EQUALS(matches("((()))"), true);
    EQUALS(matches("((())"), false);
    EQUALS(matches("(<({})>)"), true);
    EQUALS(matches("(<({)}>)"), false);
    EQUALS(matches("()<[]>{}"), true);

    return 0;
}

bool matches(const char *str) {
    // TODO
    return false;
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