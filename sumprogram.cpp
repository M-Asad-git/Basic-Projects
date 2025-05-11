#include<stdio.h>
#include<iostream>
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d", &a);
    
    printf("enter value of b:");
    scanf("%d", &b);
    int sum=a+b;
    printf("sum is:%d\n", sum);
    system("pause");
    return 0;
}