#include<stdio.h>
int temp();// function declaration

int main(){

temp();
}
int temp(){
int input;
printf("Enter the temperature of ur location in celcius:", input);
scanf("%d", &input);
if (input <= 20){
    printf("the weather is cold");}
else if( input>21 && input <32){
printf("the weather is normal"); 
    }
    else{
        printf("weather is hot");
    }
}