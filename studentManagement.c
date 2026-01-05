#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[128];
    int id;
    int age;
};

int main(){

    FILE* fptr;
    

    fptr = fopen("students.txt", "r");

    if (fptr == NULL) {
        fptr = fopen("students.txt", "w");
    }

    int n;
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fptr) != NULL)
    {
        n++;
    }
    
    

    fclose(fptr);

    char command[100];
    printf("%d\n",n);
    
    while (1){
        scanf("%s", command);
        if(strcmp(command ,"add") == 0){
            fptr = fopen("students.txt", "a");
            struct student new_student;
            scanf("%s %d", new_student.name, &new_student.age);
            n++;
            fprintf(fptr, "%s %d %d\n", new_student.name,n, new_student.age);
            fclose(fptr);
         }else if(strcmp (command , "update")==0){
            struct student students[n];
            fptr = fopen("students.txt" , "r");
            for (int i = 0; i < n; i++)
            {
                fscanf(fptr, "%s %d %d", students[i].name,&students[i].id, &students[i].age);
            }
            fclose(fptr);
            for (int i = 0; i < n; i++)
            {
                printf("%s with id %d and is %d years old.\n",students[i].name,students[i].id, students[i].age);
            }
        }else if(strcmp(command , "remove") == 0){
            int idToremove = 0;
            scanf("%d",&idToremove);
            fptr = fopen("students.txt" , "r");
            struct student students[n];
            for (int i = 0; i < n; i++)
            {
                fscanf(fptr, "%s %d %d", students[i].name,&students[i].id, &students[i].age);
            }
            fclose(fptr);
            fptr = fopen("students.txt" , "w");
            for (int i = 0; i < n; i++)
            {
                if(students[i].id != idToremove)
                {
                    fprintf(fptr, "%s %d %d\n", students[i].name, students[i].id, students[i].age);
                }
            }
            fclose(fptr);
            n--;
        }else if(strcmp(command , "exit") == 0){
            break;
        }
    }
   return 0;
}