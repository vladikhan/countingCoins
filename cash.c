#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
        if (change < 0)
        {
            printf("Please enter a positive number\n");
        }
    }
    while (change < 0);
    int quarters = change / 25;
    change = change % 25;
    int dimes = change / 10;
    change = change % 10;
    int nickels = change / 5;
    change = change % 5;
    int pennies = change / 1;
    int sum = quarters + dimes + nickels + pennies;

    printf("quarters: %i\n", quarters);
    printf("dimes: %i\n", dimes);
    printf("nickels: %i\n", nickels);
    printf("pennies: %i\n", pennies);
    printf("sum of coins: %i\n", sum);
}
