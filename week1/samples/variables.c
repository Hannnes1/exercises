/*
 *  This is basic about types, literals, variables
 *  and assignments.
 * 
 *  Types denotes sets of values. Initially will use the
 *  types:
 *  - int, the set of integers
 *  - float, double, sets of real numbers
 *  - char, the set of characters (character codes)
 *
 *  A literal is a constant (hard coded) value in the
 *  code for example 354 or 'F'. Will newer change
 *  A literal is classified to belong to some type 
 *  - 354 will be an integer (only digits, possibly a sign).
 *  - 35.4 will be a double ( '.' is decimal separator).
 *  - 'F' will be a char (a character code), single quotes.
 *  - "354" will be a string (a text), double quotes.
 * 
 *  A variable is a alterable container for a specific type of value.
 *
 *  A variable declaration is when we specify the type of value and name of
 *  the variable. A variable must be declared before we use it.
 *  When declared we can use in the program.
 *
 *  Optionally we may initialize the variable at the declaration.
 *  This is done using an assignment operator (=)
 *
 */
#include<stdio.h>

int main(void) {
    // Declare variable of type int with name a
    int a;

    // Once declared we can use the variable
    printf("%d\n", a); //  Print value in a using the name. Value could be anything (undefined)!

    /*
     * The three ways to change a variable
     */
    a = 123;    // Change value using assignment (=). 123 is a literal (hard coded value)
    // "=" means: Copy value from right side of =, put in location at left.
    a++;        // Change value using increment (++) i.e. add one
    a--;        // Change value using decrement (--) i.e. subtract one
    printf("a is %d\n", a);

    //123 = a;  // BAD, must have variable to the left.

    // Bad can't use b, must be declared before use, see below
    //printf("%d\n", b);

    // Declare and initialize
    int b = 0;

    // A variable has two "roles". If to the left of = the name
    // represents a location (to store a value)
    a = 6;
    // If to the right of = the name represent the value in the variable
    b = a;    // Copy value in a to location for b.
    printf("b is %d\n", a);

    // Using assignment the right side value is always calculated first
    a = (b + 2) / 4;

    // This is allowed. First right hand side. Get value of a, add one.
    // Put back in a!
    a = a + 1;
    printf("a is %d\n", a);


    return 0;

}