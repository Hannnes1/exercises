/*
 *  (this is multi line a comment)
 *
 *  Program to convert Celsius to Fahrenheit
 *
 *  NOTE: The structure of the program, in -> process -> out
 *  Program separated in three parts (NOT mix it all)
 *
 */
#include<stdio.h>       // Things we need that other have implemented
                        // i.e. functions printf and scanf (include from standard C library
                        // standard input output, stdio.h)

// int and void (fat blue font) are reserved words. Can't name anything to int or void
int main(void) {   // Program always starts here (at function main)

    float celsius;    // Variable declarations. Variable celsius for real number, used to store input below.
    double fahrenheit;  // NOTE: Content undefined.

    printf("Program to convert Celsius to Fahrenheit\n"); // Print to screen (and a new line \n).

    // ----- Input ----------------

    printf("Input degree C > "); // Print some help text for user (no newline)
    scanf("%f", &celsius);       // Let user enter a value (program will halt until enter pressed)
                        // Input will end up in variable celsius. MUST have & before i.e. the address to variable!
                        // "%f" says: Convert incoming key codes to a float value (each key has a code)

    // -------- Process -----------

    fahrenheit = 9 * celsius / 5 + 32;      // Do the calculation (NOTE: 32 is above / )

    // ----- Output ----------------

    printf("%.2f C = %.2f F\n", celsius, fahrenheit); // Print answer with 2 decimals and a new line (\n).
    // The "f" will be replaces by the char codes for the values of the variables

    return 0; // Send 0 to operating system (= normal termination)

}