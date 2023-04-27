#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses;
    srand(time(0));
    number= rand()%100 +1;
    do{
        printf("Guess the number between 1 and 100");
        scanf("%d", &guess);
        if(guess<number){
            printf("Guess a higher number please\n");
        }
        else if(guess>number){
            printf("Guess a lower number please\n");
        }
        else{
            printf("You guessed in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);


    return 0;
}
