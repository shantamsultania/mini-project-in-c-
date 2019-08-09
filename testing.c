#include<stdio.h>
#include<stdlib.h>
struct employee{
    char name[40];
    float salary;
    int age;
}emp,e;
int main()
{
    FILE *filepointer;
    char filename[30];
    int descision=1;
    printf("enter filename:");
    scanf("%s",filename);
    if((filepointer=fopen(filename,"ab"))==NULL)
        exit(0);
   while(descision)
    {
        printf("enter name, salary and age of employees");
        scanf("%s",emp.name);
        fflush(stdin);
        scanf("%f%d",&emp.salary,&emp.age);
        fwrite(&emp,sizeof(emp),1,filepointer);
        printf("\nenter 0 to exit \n 1 to continue to enter next data");
        scanf("%d",&descision);
    }
    fclose(filepointer);
    if((filepointer=fopen(filename,"rb"))==NULL)
        exit (0);
    while(fread(&e,sizeof(e),1,filepointer)==1)
    printf("name= %s\nsalary= %.2f\nage= %d",e.name,e.salary,e.age);
    fclose(filepointer);
    return 0;
}
