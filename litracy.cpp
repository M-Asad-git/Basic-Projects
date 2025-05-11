#include<stdio.h>
int main()
{
    // getting input from user
    int total_population;
    float total_men_percentage;
    int total_literacy_rate;
    float total_litrate_men_percentage;

    printf("Enter total population of town:");
    scanf("%d", &total_population);
    

    printf("Enter Total men percentage:");
    scanf("%f", &total_men_percentage);
    

    printf("Enter total litrecy rate:");
    scanf("%f", &total_literacy_rate);
    

    printf("Enter the total_litrate_men_percentage:");
    scanf("%f", &total_litrate_men_percentage);

    printf("The total population of town is:%d\n", total_population);
    printf("The total men percentage is:%f\n", total_men_percentage);
    printf("The total literacy rate of town is:%f\n", total_literacy_rate);
    printf("The total literate men percentage is:%2f\n", total_litrate_men_percentage);

    // calculating figure of mens and total womens in town

    float men_fig;
    float women_fig;

    men_fig= (total_men_percentage / 100) * total_population;
    printf("Total men figure in town is:%2f\n", men_fig);

    women_fig= total_population - men_fig;
    printf("Total women figure in town is:%2f\n", women_fig);

    // calculating figure of literate people in town
    float total_literate_people;

    
    total_literate_people= total_literacy_rate/100*total_population;
    printf("The figure of total literate people in town is: %2f\n", total_literate_people);

    
    return 0;

}