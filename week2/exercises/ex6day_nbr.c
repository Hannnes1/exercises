/*
 *   Calculate the day number given a year, a month and a day.
 *   See : https://www.epochconverter.com/daynumbers
 *   See: https://en.wikipedia.org/wiki/Leap_year#Algorithm
 *
 */
#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Get ordinal number of day for some date some year
int get_day_nbr(int year, int month, int day);

// The test method (all tests)
void test();

int main(void) {
    //test();                // <--------- Uncomment to test only

    int year;
    int month;
    int day;

    // -- In ----------------
    printf("Program to calculate to ordinal number of a day\n");
    printf("Input the year > ");
    scanf("%d", &year);
    printf("Input the month number > ");
    scanf("%d", &month);
    printf("Input the day number > ");
    scanf("%d", &day);

    // --- Process ---------

    // This is the top level function
    // Implement it by breaking down into smaller functions
    // Combine to solve the problem
    int dayNbr = get_day_nbr(year, month, day);

    // ---- Out ----
    printf("Ordinal number for %d/%d in %d is: %d\n", day, month, year, dayNbr);

    return 0;
}

// TODO Function definitions

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")

void test(){
    // TODO
    //EQUALS( ...), 31);

    // Etc tests as needed

    exit(0);
}



