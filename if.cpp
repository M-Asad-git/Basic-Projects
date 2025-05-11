#include<stdio.h>
int main()
{int obt_marks;
    printf("Enter your total marks obtained:");
    scanf("%d", &obt_marks);
    if(obt_marks>=90)
    {printf("Your grade is:A+");}

    else if(obt_marks>60 && obt_marks<90)
    {printf("Your grade is:A");}
    else {printf("your grade below A");}
    return 0;

}