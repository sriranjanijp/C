#include <stdio.h>
#include <math.h>

#define PI 3.1416
#define MAX 180

void main()
{
    int angle = 0;
    float x,y;
    printf("Angle        Cosine\n");
    while (angle<=MAX)
    {
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%4d  %13.4f\n",angle,y);
        angle = angle + 10;
    }
}