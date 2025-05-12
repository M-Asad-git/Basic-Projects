#include<stdio.h>
int main()
{
    int a=1234; int a_;
printf("the 4 digit number is:%d\n", a);
// dividing and removing last digit from 1234

a=1234 % 10;
printf("Value of a is:%d\n", a);
//removing last digit 4
a_=1234/10;
printf("Value of a_ is:%d\n", a_);

 // dividing and removing last digit from 123

 int b=123; int b_;
 b=123%10;
 printf("Value of b is:%d\n", b);

 b_=123/10;
 printf("Value of b_ is:%d\n", b_);

  // dividing and removing last digit from 12

  int c= 12%10, c_=12/10;
  printf("Value of c is:%d\n", c);
  printf("Value of c_ is:%d\n", c_);

    // dividing and removing last digit from 1

    int d=1;

    int sum=d+c+b+a;
    printf("sum is :%d", sum);


return 0;

}