#include<stdio.h>
int main(){
int r;
    printf("enter radius of circle:");
    scanf("%d", &r);
    printf("Radius of circle is:%d\n", r);

    // calculating cercumference of circle 

    float pi = 3.14;
    float C = 2*pi*r;

    printf("Cercumference of circle is:%.2f", C);


    return 0;

}