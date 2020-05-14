/*
        Use single characters


 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>  // Must have

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")

#define NUM_VALUE(ch) (ch -'0')

#define SIZE 6

int main(void) {

    char ch;

    printf("%zu\n", sizeof(ch));

    // ---- char vs int -------

    ch = 's';
    printf("%c\n", ch);
    printf("%d\n", ch);    // Using %d will print ASCII value

    ch = 128;              // Bad too big
    printf("%c\n", ch);
    //ch = 'ww';           // Bad ch just a single char, warning
    printf("%c\n", ch);


    // --------- IO --------------

    ch = 'X';
    putchar(ch);         // Write single char
    putc('\n', stdout);  // Explicitly specify the stream


    //ch = getchar();    // Warning! Will return int (must be able to return EOF == -1, see file)
    int ch2 = getchar(); // Read single char.
    getchar();           // Read away ending '\n'
    putchar(ch2);

    ch2 = getc(stdin); // Explicitly specify the stream
    getchar();         // Read away ending '\n'
    putchar(ch2);

    // ----- Using ctype.h macros ------------

    EQUALS(isalpha('X') > 0, true); // Is 'X' a letter? If so result > 0 .
    EQUALS(isalpha('?'), false);    // ... else 0
    EQUALS(isdigit('5') > 0, true);
    EQUALS(isdigit('z'), false);

    // Many more, see Book and web

    // ---------- Convert digit to numerical value  ----------

    printf("%d\n", '6' - '0');       // Subtract '0' to get integer value 6
    printf("%d\n", NUM_VALUE('6'));  // Better define macro

    return 0;
}