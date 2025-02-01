#include <stdio.h>
int main()
{
    int a, *p;
    int var[] = {10,20,30,40};
    a = 5;
    p = &a;
    printf("%d is stored at %x\n",a,p);
    p = var;
    printf("%d is stored at %x\n",*p,p);
    p++;
    printf("%d is stored at %x\n",*p,p);
    p++;
    printf("%d is stored at %x\n",*p,p);

    return 0;
}