/*
 *
 *  Calculate deg <-> rad using id statement
 *
 *   Samples:
 *  - if_stmt.c
 */
#include<stdio.h>

#define PI 3.1415926    // Define a constant. Type is double

int main(void) {

    int selection;
    float input;

    // ---- Input ---------
    printf("Select\n1) For Deg to rad\n2) For Rad to deg\n> ");
    scanf("%d", &selection);

    if (selection == 1) {
        printf("Input angle in deg >");
        scanf("%f", &input);
    } else if (selection == 2) {
        printf("Input angle in rad >");
        scanf("%f", &input);
    } else {
        printf("ERROR: Invalid input!");
        return 1; //Stop the program if the input is invalid
    }

    // ------ Process --------
    double result;

    if(selection == 1){
        result = input*PI/180;
    } else{
        result = input*180/PI;
    }

    // ----- Output ------------

    if(selection == 1){
        printf("%.4f deg = %.4f rad", input, result);
    } else{
        printf("%.4f rad = %.4f deg", input, result);
    }


    return 0;
}


