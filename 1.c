#include <stdio.h>

void change(float amount, int *quarters, int *dimes, int *nickels, int *pennies)
{
    int cents = (int)(amount * 100 + 0.5);

    *quarters = cents / 25;
    cents %= 25;

    *dimes = cents / 10;
    cents %= 10;

    *nickels = cents / 5;
    cents %= 5;

    *pennies = cents;
}

int main()
{
    float amount;
    int quarters, dimes, nickles, pennies;

    printf("Enter an amount in dollars : ");
    scanf("%f", &amount);

    change(amount, &quarters, &dimes, &nickles, &pennies);

    printf("Quarters : %d\n", quarters);
    printf("Dimes : %d\n", dimes);
    printf("Nickles : %d\n", nickles);
    printf("Pennies : %d\n", pennies);

    return 0;
}