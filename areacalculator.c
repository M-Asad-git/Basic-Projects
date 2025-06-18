#include<stdio.h>
int areacircle();
int areareactangle();
int areatriangle();


int main(){
char type;
printf("Enter whose area u want to calculate(c for circle, r for rectangle, t for triangle):");
scanf(" %c", &type);
if(type=='t'){
    areatriangle(); }
    else if(type=='r'){  
    areareactangle();}
    else {
        areacircle();
    }
    return 0;
}
    // area of circle
int areacircle(){
    int radius;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    int area_circle=radius*2;
    printf("Area of circle is:%d\n", area_circle);
}

    // area of reactangle

   int areareactangle(){
    int length;
    int width;
    int area_rectangle;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);
    area_rectangle=(2*length)+(2*width);
    printf("Area of rectangle is:%d\n", area_rectangle);
   }
    // area of triangle

    int areatriangle(){
        int base;
        int height;
        int area_triangle;
        printf("Enter base of triangle: ");
        scanf("%d", &base);
        printf("Enter height of triangle: ");
        scanf("%d", &height);
        area_triangle=base*height/2;
        printf("Area of triangle is:%d\n", area_triangle);
    }


