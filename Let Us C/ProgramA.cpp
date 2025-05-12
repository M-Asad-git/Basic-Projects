#include<stdio.h>
#include<math.h>
int main()
{   
    int basicsalary;
    printf("enter your basic salary:");//for input
    scanf("%d", &basicsalary);// input received
// dearness allowence is 40% of basic salary
int newsalary;
newsalary=basicsalary+(basicsalary*40/100);
printf("your new salaryy is=%dnewsalary");
int finalsalary;
finalsalary=newsalary+(basicsalary*20/100);// because 20% allowence of house rent on basic salary
printf("your final salary is=%dfinalsalary");
return 0;
}