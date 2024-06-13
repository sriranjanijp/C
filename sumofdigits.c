#include <stdio.h>

void main()
{
    long int in, c, sum = 0, hold;

    printf("Enter a number\n");
    scanf("%ld",&in);
    c = in;
    int count = 0;
    while (in>=1)
    {
        count = count + 1;
        in = in/10;
    }
    
    for(int i = count;i>0;i--)
    {
        hold = c % 10;
        sum = sum + hold;
        c = c/10;
    }

    printf("Sum of digits = %d\n",sum);
}