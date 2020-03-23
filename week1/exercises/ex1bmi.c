/*
 *  Calculate body mass index (BMI)
 *  See:
 *  - https://en.wikipedia.org/wiki/Body_mass_index
 *  - https://www.cdc.gov/healthyweight/assessing/bmi/
 *           adult_bmi/metric_bmi_calculator/bmi_calculator.html
 *
 *
 *  Samples:
 *  - c2f.c
 *  - operators.c
 *  - io.c
 *  - variables.c
 */
#include<stdio.h>


int main(void) {

    printf("Program to calculate body mass index (BMI)\n");

    float weight;
    float height;

    // ----- Input ----------------

    printf("Input your weight (kg) >");
    scanf_s("%f", &weight);

    printf("Input your height (m) >");
    scanf_s("%f", &height);

    // -------- Process -----------

    float bmi;
    
    bmi = weight/(height*height);

    // ----- Output ----------------

    printf("Your BMI is : %.2f \n", bmi);

    return 0;
}