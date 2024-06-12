/*Number gymnastics*/

#include <stdio.h>

void main()
{
    float in;
    int out;

    printf("Enter a floating point number\n");
    scanf("%f", &in);

    /*displaying right-most digit of integral part*/

    out = ((int)in)%10;
    printf("right most number = %d\n",out);

    out = ((int)in)%100;
    printf("two right most numbers = %d\n",out);

    int c = in;
    int count = 0;
    while (in>=1)
    {
        count = count + 1;
        in = in/10;
    }

    int b = 1;
    for(int i = 0;i<(count-1);i++)
    {
        b = b*10;
    }

    while (c>0)
    {
        printf("%d\n",c);
        c = c%b;
        b = b/10;
    }
}

/*song - https://youtube.com/watch?v=Q12tPR2Estc&si=fkQ9088K35UIiHTA*/