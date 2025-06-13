#include<stdio.h>
void findsquare();// function declaration

int main(){
findsquare();//function call
    return 0;
}

void findsquare(){
    int num;
    printf("enter a number whose square u want to print:", num);
    scanf("%d", &num);
    int square=num*num;
    printf("The square of %d is %d\n", num, square);
}
    