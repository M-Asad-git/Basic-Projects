#include<stdio.h>
int main()
{
    int input;
    printf("enter a five digit number:", input);
    scanf("%d", &input);
    printf("The entered number is:%d\n", input);

    // new variable a and a_

    int a;
    a=input;
    a=input%10;
    printf("the value of a is:%d\n", a);
    int a_;
    a_=input/10;
    printf("the value of a_ is:%d\n", a_);

    // new variable b and b_

    int b;
    b=a_%10;
    printf("the value of b is:%d\n", b);
    int b_;
    b_=a_/10;
    printf("the value of b_ is:%d\n", b_);

    // new variable c and c_

    int c;
    c=b_%10;
    printf("the value of c is:%d\n", c);
    int c_;
    c_=b_/10;
    printf("the value of c_ is:%d\n", c_);

    // new variable d and d_

    int d;
    d=c_%10;
    printf("the value of d is:%d\n", d);
    int d_;
    d_=c_/10;
    printf("the value of d_ is:%d\n", d_);

    // new variable e and e_

    int e;
    e=d_%10;
    printf("the value of e is:%d\n", e);
    int e_;
    e_=d_/10;
    printf("the value of e_ is:%d\n", e_);

    // reversing the input number by number system method

    int rev;
    rev=e*1+d*10+c*100+b*1000+a*10000;
    printf("The reverse of the input is:%d\n", rev);
    
    return 0;
 
}