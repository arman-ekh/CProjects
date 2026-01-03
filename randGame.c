#include <stdio.h>
#include <time.h>

int main(){
    int randNum ;
    srand (time(NULL));
    randNum = rand() % 100 + 1;
    if(randNum <0){
        randNum *= -1;
    }

    int guess = 0;
    int guessCount=0;
    do
    {
        printf("guess a number between 1 and 100:\n");
        scanf("%d" , &guess);
        if(guess < randNum){
            guessCount++;
            printf("your number is below the real number\n");
        }else if(guess > randNum){
            guessCount++;
            printf("your number is above the real number\n");
        }

    } while (guess != randNum);
    
    
    printf("You won after trying %d times\n",guessCount);
    printf("Random number between 1 and 100 was: %d\n", randNum);
    
    return 0;
}