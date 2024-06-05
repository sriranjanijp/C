#include <stdio.h>

#define MAX 10

void main()
{
    int x = 1;
    int y;
    while (x<=MAX)
    {
        y = 5*x;
        printf("5 x %2d = %2d\n",x,y);
        x++;   
    }
}