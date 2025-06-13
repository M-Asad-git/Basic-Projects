#include<stdio.h>

#include "functions.h"

bool isDividedByZero(int divident, int divisor) {

    if(divisor == 0){
        printf("Error: Divison by zero is not allowed %d, %d\n", divident, divisor);
        return false;
    }
    else
    {
        printf("We can divide the numbers.\n");
        return true;
    }

    return false;
}


int divide(int a, int b){

     if(isDividedByZero(a,b)){
        int result = a / b;
        return result;
    }
    else
    {
        printf("DividedbyZero returned false.\n");
        return 0;
    }

}

int sum(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a , int b){
    return a * b;
}

// int main(){
//     int a = 10;
//     int b = 2;

//     printf("Divided result %d\n", divide(a, b));
//     printf("sum result %d\n", sum(a, b));
//     printf("subtract result %d\n", subtract(a, b));
//     printf("multiply result %d\n", multiply(a, b));

// }



// void name(){
//     printf("Asad\n");// finction defination
// }


// void sum() {
//     // sum defi
// }

// void multiply() {
//     // multi
// }

// void divide() {

// }

// void runCalculator(){
//     // input
//     // switch(input)
//     // case 1 = sum
//         // fun sum()
//     // case 2 = mul
//         // fun mul()
//     // case 3 = divide
//         // fun diviede()
// }