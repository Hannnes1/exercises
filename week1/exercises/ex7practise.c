/*
 *  Program to practice multiplication 
 *
 *
 *  Samples:
 *  - random.c
 */

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void) {

    int table = 0;
    int answer;
    int n_answers = 0;
    int correct = 0;
    int quest;

    printf("Practise multiplication!\n");
    printf("Select table (2-9) to train (-1 to quit) > ");
    scanf("%d", &table);

    srand((unsigned int) time(NULL));  // Init random generator
    
    
    // TODO: Make it work once, then surround with loop!
    

    printf("Number of questions = %d. Number of correct = %d", n_answers, correct);

    return 0;
}




