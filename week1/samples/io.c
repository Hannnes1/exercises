/*
 *   This is basic input output (IO) i.e. read from keyboard 
 *   and print to window (terminal)
 * 
 *   General knowledge is the ASCII code table, see
 *   https://en.wikipedia.org/wiki/ASCII (scroll down)
 * 
 */
#include<stdio.h>

int main(void) {

    // ------------ Write Strings (text), 0-n characters -------------------

    // Write multiple characters (a text) to screen
    printf("Hello world\n");    // Add new line last (\n)

    printf("\n");   // Print new line only

    // ---------- Write numerical values (converted to strings) --------------

    // Convert integer 123 to char code for '1', '2' and '3' and print to screen
    printf("%d", 123);  // Use %d for convert from int to char codes.

    // Add some helping text and a new line.
    printf("Value of i is: %d\n", 345);

    // Print a real number (floating number)
    printf("%.2f\n", 1.23); // %f to convert, .2 is number of decimal places
    printf("%.5f\n", .6789); // format is .xxxxx

    // ----  Read many chars and convert to integer ----------------

    // CLion will warn for usage of scanf. We ignore the warning.
    
    int number;           // Variable to store input
    scanf("%d", &number); // %d to convert input char codes to integer
                          // MUST USE & before variable
                          // i.e. the address of the variable
                          // where the input should end up
    printf("%d\n", number);

    // Add some helping text
    printf("Input an integer > ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);

    // ----  Read many chars and convert to float or double ----------------

    // Read a float (real number with approx. 6 decimal)
    float f_number;
    printf("Input a float (real number) > ");
    scanf("%f", &f_number);          // %f to convert to float
    printf("You entered: %3.3f\n", f_number);

    // Read a double (real number with approx. 15 decimals)
    double d_number;
    printf("Input a double (real number > 10) > ");
    scanf("%lf", &d_number);         // %lf to convert to double
    printf("You entered: %3.8f\n", d_number);

    return 0;
}