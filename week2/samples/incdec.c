/*
 *   More details on behaviour for ++ and --
 *
 */
#include<stdio.h>

int main(void) {

   int i = 1;
   int j = 0;

   // Postfix form
   printf("i++ gives %d\n", i++);   // Get value to print ( = 1) then, add 1
   // Prefix form
   printf("++i gives %d\n", ++i);    // Add 1 ( = 2), then get value to print

   i = 1;
   j = i++;
   printf("j = i++ gives i = %d j = %d\n", i, j);
   j = ++i;
   printf("j = ++i gives i = %d j = %d\n", i, j);

   return 0;
}

