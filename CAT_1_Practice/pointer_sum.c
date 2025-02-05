// Adding 5 to two numbers
#include <stdio.h>
void sum(int *,int*);
int main()
{
    int a,b;
    a = 5;
    b = 6;
    printf("%d %d \n",a,b);
    sum(&a,&b);
    printf("%d %d \n",a,b);
}
void sum(int *pa,int *pb)
{
    *pa = *pa+5;
    *pb = *pb+5;
}