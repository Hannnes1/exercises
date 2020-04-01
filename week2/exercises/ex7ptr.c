/*
 *  Uncomment a)-i) one at the time and explain
 *
 *  - If compile error: What's the problem (comment out again)?
 *  - If no compile error. Run it. Any problems? If so what happens? Why?
 *    NOTE: if exit code not 0 there's a problem (11 is segmentation fault i.e. crash)
 *  - If no problem what will be printed? Why?
 *
 *  TIP: Use CLions warnings (yellow) to get hints. Point at yellow light bulbs.
 *
 * Samples
 * - ptr.c
 * - ptr_func.c
 */

#include<stdio.h>

// Try swap values in a and b
void swap(int a, int b);

// Try swap values in a and b using addresses
void swap2(int *a, int *b);

int main(void) {

    int i = 1;
    int j = 2;
    int *k;
    int *l;       

    // a)
    //printf("%d", *i); //i är ingen pekare. Kan inte använda *

    // b)
    printf("%d\n", sizeof(&i) == sizeof(i)); //Adressens till i != i

    // c)
    //&i = 0xFFFFFF; //Kan inte ändra adressen på en icke-pekare

    // d)
    *&i = 567;
    printf("%d\n", i);

    // e)
    k = &i;
    printf("%d\n", *k);

    // f)
    *k = i;
    printf("%d\n", *k);

    // g)
    l = k;
    printf("%p\n", l);

    // h)
    //swap(i, j); //Värdena byter plats i funktionen, men inte i övriga programmet
    //printf("%d %d\n", i, j);

    //i)
    swap2(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}

// ----------- Methods -----------------

// Try to swap the values of a and b
//void swap(int a, int b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}

// Another try ...
void swap2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}