#include<stdio.h>
int swapnumbers();// function declaration

int main(){
    swapnumbers();// function call
    return 0;
}

int swapnumbers(){
    int a;
    int b;
    int temp;
    printf("enter value of a:", a);
    scanf("%d", &a);
    printf("enter value of b:", b);
    scanf("%d", b);
    temp=b;
    b=a;
    a=temp;
    printf("after swapping a is:%d\n", a);
    printf("after swapping b is:%d\n", b);
    return 0;

}
