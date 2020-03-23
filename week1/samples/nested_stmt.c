/*
 *
 *   This demonstrates nested statements i.e. while inside if/while or
 *   if inside if/while etc.
 *
 *   NOTE: Always use blocks, i.e. {}
 *
 */
#include<stdio.h>
#include<stdbool.h>

int main(void) {

    //--- if nested inside while -----------------
    int i = 0;
    while (true) {
        printf("%d ", i);
        if (i > 10) {
            break;
        }
        i++;
    }
    printf("\n");   // Layout


    // while nested inside if -------------------
    int n;
    printf("Input integer (1-10) > ");
    scanf("%d", &n);

    if( n > 5){
        while( n > 5 ){
           printf("%d ", n);
           n--;
        }
    }else{
         while( n <= 5 ){
           printf("%d ", n);
           n++;
        }
    }
    printf("\n");

    // while nested inside while (nested loops) ----------

    int a = 0;
    while( a < 5){              // Outer loop
        printf("a = %d\n", a);
        int b = 0;
        while( b < 5){         // Inner loop
            printf("b = %d ", b);
            b++;
        }
        a++;
        printf("\n");
    }

    return 0;
}