#include<stdio.h>
int main()
{
    // getting  input of  total selling price and total profit earned of 15 pieces
int number_of_pieces;    
int total_selling_price;
int total_profit;

number_of_pieces=15;

    printf("Enter the total selling price of 15 pieces:");
    scanf("%d", &total_selling_price);
    printf("Total selling price of 15 items is:%d\n", total_selling_price);

    printf("Enter the total profit earned:", total_profit);
    scanf("%d", &total_profit);
    printf("The total profit earned is:%d\n", total_profit);

    // first we calculate total cost of 15 pieces 
    int total_cost;

    total_cost= total_selling_price - total_profit;
    printf("Total cost of 15 pieces is:%d\n", total_cost);

    // now we will divide total cost with number of pieces to get price of 1 piece

int cost_per_piece;

cost_per_piece= total_cost/number_of_pieces;
printf("Price per piece is:%d", cost_per_piece);

    return 0;

}