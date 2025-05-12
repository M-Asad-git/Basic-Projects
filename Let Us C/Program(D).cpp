#include<stdio.h>
int main(){ 

    int temp_F;
    printf("enter temperature in fernheit:", temp_F);
    scanf("%d", &temp_F);

    printf("Temperature in fernheit is:%dF\n", temp_F);  

    // converting in celcius 

    int C  =  (temp_F-32) *  5/9;


    printf("the Temperature in centigrade is:%dC", C);

    
            return 0;
}
