/*
 *   Strings and pointers
 *
 *   All about arrays/matrices and pointers apply here too!
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>   // Must have


int main(void) {

    char str[] = "abc";   // '\0' added

    // --- Use pointer (as with arrays) --------

    char *ptr;
    printf("%zu\n", sizeof(ptr));  // 8

    ptr = str;
    printf("%s\n", ptr);

    // Indexing on pointer
    printf("%c\n", ptr[1]);

    // Step pointer
    char *ptr2 = &str[1];
    ptr2++;
    printf("%c\n", *ptr2);
    ptr2 = ptr2 -2;
    printf("%c\n", *ptr2);

    // ------ Find and change single char -----

    ptr = strchr(str, 'b');   // strchr from string.h
    *ptr = 'X';               // same as ptr[0]

    // ------------- Pitfall!!! -------------

    ptr = "qwe";     // ptr has address of string constant
    //ptr[0] = 'X';    // Crash, can't change constant

    ptr2 = "qwe";    // Same as ptr, all constants stored at same location

    // ------ Array of strings ---------------

    // Strings are addresses, so array of pointer variables (to constant strings)
    char *str_arr[] = {"aaa", "bbb", "ccc"};
    for (int i = 0; i < 3; i++) {
        printf("%s\n", str_arr[i]);
    }
    //str_arr[0][1] = 'X';    // Crash!! A constant

    char str_arr2[10][20];        // Ten modifiable strings of length 20
    strncpy(str_arr2[0], "abcde", 10); // Use strcpy (string copy) to assign, see use_string_h.c
    str_arr2[0][1] = 'X';           // Ok!


    return 0;
}


