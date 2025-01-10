#define ITEMS 4
#include <stdio.h>

void main()
{
    int i, quantity[5];
    float rate[5], value, total;
    char code[5][5];

    i = 1;
    while(i<=ITEMS)
    {
        printf("Enter code, quantity, rate\n");
        scanf("%s %d %f", &code[i], &quantity[i], &rate[i]);
        i++;
    }

    putchar('\n');
    putchar('\n');

    printf("         Inventory report          \n");
    printf("-----------------------------------\n");
    printf(" Code   Quantity   Rate     Value\n");
    printf("-----------------------------------\n");

    total = 0;
    i = 1;
    while(i<=ITEMS)
    {
        value = rate[i]*quantity[i];
        total = total + value;
        printf("%5s %7d %10.2f %10.2e\n",code[i], quantity[i], rate[i], value);
        i++;
    }
    printf("-----------------------------------\n");
    printf("    Total value = %e\n",total);
    printf("-----------------------------------\n");
    putchar('\n');
}   