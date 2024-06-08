#include <stdio.h>

void main()
{
    int positive, negative;
    float input;

    positive = 0;
    negative = 0;

    printf("Enter numbers, enter 0 to terminate\n");

    while (input!=0)
    {
        scanf("%f",&input);
        if (input>0)
            positive++;
        else if (input<0)
            negative++;
        else
            continue;      
    }

    printf("Number of positive numbers: %d\n",positive);
    printf("Number of negative numbers: %d\n",negative);   
}