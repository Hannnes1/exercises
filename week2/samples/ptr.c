/*
 *  Pointers in C
 *
 *  Fundamental equality:  *&i == i   (* and & inverses)
 *
 *  NOTE: If process finished with exit code 11 (= segmentation fault in Linux)
 *  program has crashed
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

    int i = 123;   // Ordinary variable

    printf("%d\n", i);       // The content of i, 123
    printf("%p\n", &i);      // Address of i. NOTE: %p
    printf("%d\n", *&i);     // 123 (*&i == i)
    printf("%d\n", *&*&*&i); // 123 (silly example)

    // --- More examples *&i == i ------------

    int j = *&i;          // Same as j = i;
    printf("%d\n", j);    // 123

    *&i = 35;             // Same as i = 35;
    printf("%d\n", i);    // 35

    // ---------- Address (pointer) and int is not the same -------------------

    printf("%ld\n", sizeof(i));    // 4 bytes
    printf("%ld\n", sizeof(&i));   // Address is 8 bytes (64 bit machine)


    // ------ Pointer variables ---------------

    i = 123;   // Reset value

    // A pointer variable ptr. May store address to int.
    // * indicates it's a pointer variable (NOT the *-operator here)
    int *ptr = &i;          // * NOT part of name!

    printf("%ld\n", sizeof(ptr));    // Pointer is 8
    printf("%ld\n", sizeof(*ptr));   // Variable pointed at is 4

    printf("%p\n", ptr);   // The content of ptr = address to i
    printf("%p\n", &ptr);  // Address to ptr
    printf("%d\n", *ptr);  // 123 (*ptr == *&i == i)

    // ------ Pointer to the right ---------

    j = *ptr + 1;         // *ptr + 1 == *&i + 1 == i + 1
    printf("%d\n", j);    // 124


    j = ptr + 1;        // Will add 1 to an address i.e. &i + 1
                        // Warning! Try to store address in int-

    // -------- Pointer to the left ---------------

    *ptr = i + 1;           // *ptr == *&i == i
    printf("%d\n", i);       // 124

    ptr = i + 1;      // Warning! Try to store int in pointer.

    // -------- Pointer left and right ---------------

    *ptr = *ptr + 1;
    printf("%d\n", *ptr);   // 125
    printf("%d\n", i);      // 125

    // ---------- Bad -------------------

    // int m = &i;   // BAD! Address not same as int
    // int m = *i;  // BAD! i not a pointer variable
    // *i = 345;    // BAD! i not a pointer variable
    //&i = 5;       // &i is a value can't store a value in other value

    ptr = 0x7666001;    // BAD, Can store this address but ...
    //printf("%d\n", *ptr);  // ... segmentation fault, program crash, exit code 11


    // ----- Must declare pointer *to some type* ---------------
    // Because we dereference pointer, we must know what type the pointer point at

    double *dptr;

    i = *dptr;   // Warning, compiler knows dptr points to double value
    //~*dptr;    // Compile error can't bit flip double

    // ------------- NULL ----------

    ptr = NULL;        // A pointer pointing nowhere
    *ptr;

    return 0;
}


