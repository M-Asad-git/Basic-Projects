#include<stdio.h>
int main()
{
    // input 5 digit number
int num;
    printf("Enter a 5 digit number:");
    scanf("%d", &num);
    printf("The 5 digit number is:%d\n", num);

    // adding 1 to each number
    int new_num;
    new_num= num+11111;
    printf("The new number is:%d\n", new_num);

    return 0;
}