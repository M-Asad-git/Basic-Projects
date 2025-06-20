#include<stdio.h>
int main(){
    float price[3];// declariang array size
// getting input
printf("Enter price of 1st item:");
scanf("%f", &price[0]);
printf("Enter price of 2nd item:");
scanf("%f", &price[1]);
printf("Enter price of 3rd item:");
scanf("%f", &price[2]);
float price_gst=price[0]+0.18*price[0];
// getting output after adding
printf("1st item price after gst is=%f\n",price[0]+0.18*price[0]);
printf("2nd item price after gst is=%f\n", price[1]+0.18*price[1]);
printf("3rd item price after gst is=%f\n", price[2]+0.18*price[2]);

return 0;
}