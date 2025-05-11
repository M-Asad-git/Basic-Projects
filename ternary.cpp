#include<stdio.h>
int main()
{
    int age;
    printf("Enter ur age:", age);
    scanf("%d", &age);

     age >=18? printf("Adult\n") : printf("Not an Adult\n");

     int marks;
     printf("Enter your obtained marks:");
     scanf("%d", &marks);

     marks>=40?printf("You are pass"):printf("You are fail");
    return 0;
}