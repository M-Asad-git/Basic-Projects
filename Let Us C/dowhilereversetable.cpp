#include <stdio.h>

int main()
{
    int n;
    printf("Enter number whose table you want to print: ");
    scanf("%d", &n);

    printf("The table of %d is given below:\n",n);

    int i = 10;
    do {
        printf("%d*%d=%d\n",n,i,n*i);
        i--;
    } while (i>= 1);

    return 0;
}
