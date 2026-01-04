#include <stdio.h>

void trianglePattern(int spaceCount,int i){            
        for(int j = 0 ; j < spaceCount/2; j++){
            printf(" ");
        }
        for(int k = 0 ; k < i; k++){
            printf("*");
        }
        for(int j = spaceCount/2; j < spaceCount; j++){
            printf(" ");
        }
            printf("\n");
    return;
}

int main() {
    int count = 6;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = count; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    if(count %2 == 0){
        count += 1;
    }
    for (int i = 0; i <= count; i++)
    {
        int spaceCount = count - i;
        if(spaceCount %2 != 0){
                continue;
            }
        trianglePattern(spaceCount , i);
    }
    for (int i = count; i > 0; i--)
    {
        int spaceCount = count - i;
        if(spaceCount %2 != 0){
                continue;
            }
        trianglePattern(spaceCount , i);
    }
    

    
    return 0;
}
