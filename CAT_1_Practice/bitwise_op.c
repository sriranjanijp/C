#include <stdio.h>
int main()
{
    int p = 2;
    int q = 1;
    int x = 5;
    int y = 3;
    int z = 2;
    int c = (p^q^p) + x + y*3 / (x-3);
    printf("%d\n",c);
}