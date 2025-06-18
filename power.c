#include<stdio.h>
#include<math.h>
int power();

int main() {
    power();    
    return 0;
}
int power(){
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    for(int i=1;i<=exponent;i++){
        printf("%d raise to power of %d is %d\n", base,exponent, (int)pow(base, i));
    }
}