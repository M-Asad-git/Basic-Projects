#include<stdio.h>
int main()  {

    int l; // l represent length
    int b; // b represent breadth


    printf("enter the length of recangle:"); // getting input
    scanf("%d", &l); // scaning it


    printf("enter the breadth of recangle:"); // getting input
    scanf("%d", &b); // scaning it

    // calculating area of rectangle


    int A = l * b;  // declariang A variable and using it and using farmula of area
    printf("Area of rectangle is:%d\n", A); // printing the value of area of rect

    // calculating the perimeter of recangle

    int P = (2*l)  +  (2*b);
    printf("the perimeter of recangle is:%d\n", P);
    

    return 0;
