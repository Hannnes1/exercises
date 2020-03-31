/*
 *   Calculation of easter day using a method
 *   invented by C. F. Gauss (you don't need to understand in full),
 *   see https://en.wikipedia.org/wiki/Carl_Friedrich_Gauss
 *
 *   To check your result: http://www.wheniseastersunday.com/
 *
 * Samples:
 * - week1/if_stmt.c
 * - week1/nested_stmt.c
 */
#include<stdio.h>

int main(void) {
    int a, b, c, d, e, s, t;   // Avoid variables on same line (but acceptable here)
    int date;
    int year;
    int month;

    // ---- Input --------------
    printf("Program to calculate easter day\n");
    printf("Input a year (1900-2099) > ");
    scanf("%d", &year);

    // ----- Process -----------
    a = year % 19;     // Don't need to understand, Gauss did understand ...
    b = year % 4;
    c = year % 7;
    s = 19 * a + 24;
    d = s % 30;
    t = 2 * b + 4 * c + 6 * d + 5;
    e = t % 7;
    date = 22 + d + e;

    /*
        Now ... read this and continue to implement below

        If date (above) is less than 32, then date is found and month is march.
        Else: Date is set to d + e - 9 and month is april ...
        ... but with two exceptions
        If date is 26, easter is on 19 of april.
        If date is 25 and a = 16 and d = 28 then date is 18 of april.
     */
    if(date < 32){
        month = 3;
    }else{
        month = 4;
        if(date == 26){
            date = 19;
        } else if(date == 25 && a == 16 && d == 28){
            date = 18;
        }else{
            date = d + e - 9;
        }
    }

    // --------- Output -----------
    printf("Easter Sunday for %d is %d/%d", year, date, month);

    return 0;

}