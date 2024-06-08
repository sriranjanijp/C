#include <stdio.h>

void main()
{
    int in, years, weeks, days;

    printf("Enter number of days\n");
    scanf("%d",&in);
    
    years = in/365;
    in = in - (years*365);
    weeks = in/7;
    in = in - (weeks*7);
    days = in;

    printf("%d years, %d week, %d days\n",years,weeks,days);
}