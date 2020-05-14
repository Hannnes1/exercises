

/*
 *    Encrypt/Decrypt a file.
 *    Using Caesar cipher, see: https://en.wikipedia.org/wiki/Caesar_cipher
 *
 *
 *    NOTE: Must set working directory for CLion else will not be able to find files
 *
 *    Drop down (run) toolbar > Edit Configurations > Select ex4crypto > Browse
 *    working directory (should be like .../week6/exercises/ex4crypto)
 *
 *  See:
 *  - file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>

#define DEBUG false

#define MAX 20
#define MAX_BUF 100


bool read_str(char str[], int max_len);

void clean_stdin(void);

FILE *open_file(const char *name, const char *mode);

void crypt(const char *dest, const char *src, int key);

void decrypt(const char *dest, const char *src, int key);

int main(void) {

    setlocale(LC_ALL, "");  // Use users settings for locale (language, encodings etc.)

    if (DEBUG) {
        crypt("out.txt", "in.txt", 1);
        decrypt("out2.txt", "out.txt", 1);
        exit(0);
    }

    int selection;
    int key;
    char in_file_name[MAX];
    char out_file_name[MAX];

    while (true) {
        printf("Select\n1) Crypt\n2) Decrypt (-1 to quit)\n> ");
        scanf("%d", &selection);
        if (selection < 0) {
            break;
        }
        printf("Input (de)cipher key (small int) > ");
        scanf("%d", &key);

        clean_stdin();

        printf("In file name > ");
        read_str(in_file_name, MAX);
        printf("Out file name > ");
        read_str(out_file_name, MAX);
        if (selection == 1) {
            crypt(out_file_name, in_file_name, key
            );
        } else if (selection == 2) {
            decrypt(out_file_name, in_file_name, key
            );
        } else {
            printf("Unknown selection? > ");
        }
    }

    return 0;
}


void crypt(const char *dest, const char *src, int key) {
    FILE *in = open_file(src, "r");
    FILE *out = open_file(dest, "w");


    // TODO

    fclose(in);
    fclose(out);
}

void decrypt(const char *dest, const char *src, int key) {
    // TODO
}

FILE *open_file(const char *name, const char *mode) {
    FILE *f = fopen(name, mode);
    if (f == NULL) {
        printf("Couldn't open file %s!", name);
        exit(EXIT_FAILURE);
    }
    return f;
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
    while ((c = getchar()) != '\n' && c != EOF);    // <-- Empty statement
}

// Remove possible \n in string (new line)
bool remove_nl(char *str) {
    size_t i = strlen(str) - 1;
    if (str[i] == '\n') {   // Is there a \n (enter key) to the left?
        str[i] = '\0';      // If so replace
        return true;
    }
    return false;
}

// Read string from keyboard
bool read_str(char str[], int max_len) {
    // Use fgets to limit user input.
    if (fgets(str, max_len, stdin) == NULL) {
        return false;   // Input failed for some reason...
    }
    if (!remove_nl(str)) {
        clean_stdin();       // Didn't read \n
    }
    return true;
}

