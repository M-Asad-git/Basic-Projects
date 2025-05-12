#include<stdio.h>
int main()
{
    int distance_in_km;
    printf("enter distance in km:");
    scanf("&d", &distance_in_km);


    int distance_in_meters = distance_in_km * 1000;
    printf("distance in meter: %d\n", distance_in_meters);


    int distance_in_feet = distance_in_km * 3280;
    printf("distance in feet is: %d\n", distance_in_feet);


    int distance_in_inches = distance_in_km * 39370;
    printf("distance in inces: %d\n", distance_in_inches);


    int distance_in_centimeters = distance_in_km * 100000;
    printf("distance in centimeters: %d\n", distance_in_centimeters);

    return 0;

}