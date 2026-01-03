#include <stdio.h>
#include <string.h>

int main(){
    char command[128];
    int a , b;
    
    do{
        scanf("%s",command);
        if(strcmp(command, "exit") != 0){
            scanf(" %d %d",&a,&b);
            if (strcmp(command, "add") == 0)
            {
                printf("%d\n", a+b);
            }else if (strcmp(command, "sub") == 0)
            {
                printf("%d\n",a-b);
            }else if (strcmp(command, "mul") == 0)
            {   
                printf("%d\n",a*b);
            }else if (strcmp(command, "div") == 0)
            {
                if(b == 0){
                    printf("you cant divide by zero\n");
                }else{
                printf("%d\n",a/b);
                }
            }
        }
        
    }while(strcmp(command, "exit") != 0);


    return 0;
}