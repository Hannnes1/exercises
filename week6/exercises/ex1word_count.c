/*
         How many word in a text?

    See:
    - string.c

 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SPACE ' '
#define SIZE 20

// Non standard input function
bool read_str(char str[], int max_len);

int main(void) {

    char str[SIZE];
    int count = 0;

    printf("Input a text max 19 chars (space allowed) > ");
    read_str(str, SIZE);

    // --------- Basic  version -------------

    // TODO Count words

    printf("There are %d word in the text\n", count + 1);

    return 0;

}

// --------- IO -----------------
/*
 * Reading strings from keyboard is complex
 * Here are some helper functions
 */

// Remove possible trailing char in stdin (keyboard buffer)
void clean_stdin(void) {
    int c;
    // Read until we hit \n or EOF
    while ((c = getchar()) != '\n' && c != EOF);    //<--- empty statement
}

// Remove possible \n in string (new line)
bool remove_nl(char *str) {
    size_t i = strlen(str) - 1;
    if (str[i] == '\n') {   // Is there a \n (enter key) to the left of '\0'?
        str[i] = '\0';      // If so replace
        return true;
    }
    return false;
}

// Read string from keyboard
bool read_str(char str[], int max_len) {
    // Use fgets to limit user input.
    if (fgets(str, max_len, stdin) == NULL) {
        return false;   // Input failed for om reason...
    }
    if (!remove_nl(str)) {  // Didn't read \n
        clean_stdin();
    }
    return true;
}

