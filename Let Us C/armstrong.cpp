#include<stdio.h>
#include<math.h>
int main()
{
    int input;
    printf("enter a 3 digit number:");
    scanf("%d", &input);
    printf("Entered number is:%d\n", input);
    // declaring variables
int a,a_;
a=input;
a=input%10;
printf("Value of a is:%d\n", a);

a_=input/10;
printf("Value of a_ is:%d\n", a_);

int b,b_;
b=a_%10;
printf("Value of b is:%d\n", b);

b_=a_/10;
printf("Value of b_ is:%d\n", b_);

int c,c_;
c=b_%10;
printf("Value of c is:%d\n", c);

c_=b_/10;
printf("Value of c_ is:%d\n", c_);

// checking is it armstrong number or not

int a_arm;
a_arm=pow(a,3);
printf("The value of a_arm is:%d\n", a_arm);

int b_arm;
b_arm= (int)(round(pow(b, 3)));
printf("The value of b_arm is:%d\n", b_arm);

int c_arm;
c_arm=pow(c,3);
printf("The value of c_arm is:%d\n", c_arm);
// adding their values

int sum=a_arm+b_arm+c_arm;
printf("The sum is:%d\n", sum);

// checking is it armstrong or not 

if (sum == input){
    printf("Its armstrong number");}
    else{
        printf("The Entered number is nor an Armstrong number");
    }

return 0;


}