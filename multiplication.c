#include <stdio.h>
int mul(int a, int b);

void main()
{
    int y = 10;
    int x = 5;
    int c = mul(x,y);
    
    printf("The multiplication of %d and %d is %d\n",x,y,c);
}

int p;
int mul(int a, int b)
{
    p = a*b;
    return(p);
}