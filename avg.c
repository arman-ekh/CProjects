#include <stdio.h>

int main(){
    int numOfStudesnts;
    float sum = 0.0, avg, score;
    
    printf("Enter number of students: \n");
    scanf("%d", &numOfStudesnts);

    int scores[numOfStudesnts];

    for(int i = 0; i < numOfStudesnts; i++){
        printf("Enter score for student %d: \n", i + 1);
        scanf("%f", &score);
        sum += score;
        scores[i] = score;
    }

    float highest = scores[0];
    float lowest = scores[0];
    for(int i = 1; i < numOfStudesnts; i++){
        if(scores[i] > highest){
            highest = scores[i];
        }
        if(scores[i] < lowest){
            lowest = scores[i];
        }
    }
    avg = sum / numOfStudesnts;
    printf("Average score: %.2f \nHighest score: %.2f \nLowest score: %.2f", avg, highest, lowest);
    

    return 0;
}