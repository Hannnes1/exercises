/*
         String basics

         Strings are char-arrays with a null byte as end marker
         All about arrays are true for strings!

         Additional facts:
         - String always have char type for elements
         - Strings have an ending '\0' (zero byte)
         - Traversing is done with while loops
         - Input with strings uses fgets (and more)
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 6

int main(void) {

    char str[SIZE];                    // Uninitialized.
    char str2[] = {'a', 'b', 'c', 0};  // Initialise. MUST have 0 last. Clumsy
    char str3[] = "abc";               // Shorthand for previous. Will have 0

    printf("%zu\n", sizeof(str2));


    // --------- Individual chars, indexing (as arrays) ----------

    char ch = str3[1];
    str2[2] = ch;

    // --------- IO --------------

    printf("%s\n", str3);     // Print string. Use %s for formatstring


    /*
     *  fgets will always add ending \0 BUT!
     *
     *  If str >= SIZE, last char(s) lost replaced by \0
     *  If str <= SIZE - 2 there's a \n (enter key) before the ending \0 !!
     *  If no chars entered, just enter (empty string) str will be \n\0 only.
     */
    // No & strings are like arrays
    fgets(str, SIZE, stdin);   // Read string SIZE-1 chars
    printf("%s\n", str);

    // Better do a function of fgets, see ex1word_count.c


    // ------ Assign  -------------

    char str4[10];
    //str4 = str3;     // Can't assign, .. as arrays


    // -------- Equality ---------------

    if (str4 == str3) {
        // Bad, comparing addresses, not chars
    }

    // Use standard C library functions to assign, compare, see use_string_h.c

    return 0;
}