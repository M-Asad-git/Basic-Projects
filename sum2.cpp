#include<stdio.h>
int main ()
{
    // getting input from user and printing it
    int input;
    printf("enter a five digit number:",  input);
    scanf("%d" , &input);
    printf("The entered number is:%d\n", input);

    // now i am dividing and modulator the number

    int a=input;
    a=input%10;
    printf("modulator of a:%d\n", a);
    int a_=input;
    a_=input/10;
    printf("value of a_ is:%d\n", a_);

// declaring b variable and doing same as above

    int b=a_;
    b=a_%10;
    printf("modulator of b is:%d\n", b);
int b_=a_/10;
printf("value of b_ is:%d\n", b_);

// declaring c variable and doing same as above

int c=input;
c=b_%10;
printf("modulator of c is:%d\n", c);
int c_=b_/10;
printf("value of c_ is:%d\n", c_);

// declaring d variable and doing same as above

int d=input;
d=c_%10;
printf("modulator of d is:%d\n", d);

int d_=c_/10;
printf("value of d_ is:%d\n", d_);

// declaring d variable and doing same as above

int e=input;
e=d_%10;
printf("modulator of e is:%d\n", e);

int e_=d_/10;
printf("value of e_ is:%d\n", e_);

// doing sum of input digits

int sum;
sum= a+b+c+d+e;
printf("sum of given digits is:%d\n", sum);

    return 0;

}