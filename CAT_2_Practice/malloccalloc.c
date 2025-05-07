#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,*q,tablesize;

    tablesize = 10;
    p = (int *)malloc(10*sizeof(int));
    q = (int *)calloc(tablesize,sizeof(int));

    int r = 1;
    for(int * i = p; i<tablesize+p;i++)
    {
        *i = r;
        r++;
    }

    for(int * i = p; i<tablesize+p;i++)
    {
        printf(" %d ",*i);
    }
}