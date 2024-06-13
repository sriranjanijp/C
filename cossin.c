#include <stdio.h>
#include <math.h>

#define PI 3.1416

void main()
{
    int x;
    float y,c,s;

    printf("x (degrees) |     sin(x)    |     cos(x)    |\n");
    
    for (int i = 0; i<=180; i = i+15)
    {
        y = (PI/180)*i;
        c = cos(y);
        s = sin(y);
        
        printf("    %3d     |    %2.6f   |    %2.6f   |\n",i,s,c);
    }
}
