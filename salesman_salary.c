/*program to calculate gross salary after commission and bonus*/

#define BASE_SALARY  1500.00
#define BONUS        200.00                    /*added per computer*/
#define COMMISSION    0.02                     /*on the sale amount*/

#include <stdio.h>

void main()
{
    int quantity;
    float saleamt, bonus, commission, grossamt;

    printf("Enter the number of units sold\n");
    scanf("%d", &quantity);
    printf("Enter price of each computer\n");
    scanf("%f", &saleamt);

    bonus = BONUS * quantity;
    commission = COMMISSION * quantity * saleamt;
    grossamt = BASE_SALARY + bonus + commission;

    printf("Bonus        = %6.2f\n", bonus);
    printf("Commission   = %6.2f\n", commission);
    printf("Total salary = %6.2f\n", grossamt);
}

/*Take a song? https://youtu.be/lX28t4QeQuI?si=Fb07cGD0THEqHjyq*/