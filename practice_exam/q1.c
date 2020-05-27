#include <stdio.h>

int main() {
    int i;
    printf("> ");
    scanf("%d", i); //i inte initialiserad. scanf förväntar sig pekare
    if(i = 1){ //Tilldelningsoperator istället för jämförelse
        printf("Fel");
    }else{
        printf("Rätt");
    }
}
