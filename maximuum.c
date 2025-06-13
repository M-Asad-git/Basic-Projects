#include<stdio.h>
int findmaximum();// function declaration

int main(){
    findmaximum();// function call
    return 0;
}
 int findmaximum(){
    int a;
    int b;
    int c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);    
    printf("Enter value of c: ");
    scanf("%d", &c);
    if(a>b && a>c){
        printf("biggest number is:%d\n", a);    
    }
    else if(b>a && b>c){           
        printf("biggest number is:%d\n", b);
        }
        else{printf("biggest number is:%d\n", c);
        }
    
 }
