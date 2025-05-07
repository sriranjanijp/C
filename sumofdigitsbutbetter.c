#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num , sum = 0;

    printf("Enter a number\n");
    scanf("%d",num);

    while (num>0)
    {
        sum += num%10;
        num /= 10;
    }

    printf("The sum of digits is %d\n",sum);
}