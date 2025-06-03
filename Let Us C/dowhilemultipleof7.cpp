#include<stdio.h>
int main()
{
    int n;
    do{
        //getting input
        printf("Enter a number:");
        scanf("%d",&n);
        printf("The number is:%d\n", n);
        
        //if number is not multiple of 7 the program exit
        if(n%7!=0){
        break;}
    }while(1);
    printf("Program end");
}