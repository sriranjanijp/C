#include <stdio.h>

void main()
{
    float a,b,c,x,y;

    printf("Enter three numbers\n");
    scanf("%f %f %f",&a,&b,&c);

    x = (a>b)?a:b;
    y = (x>c)?x:c;

    printf("The largest number is: %f\n",y);
}

/*song - https://music.youtube.com/watch?v=ikNV3_Ui6Os&si=-OGE8NE_FhVqLb1U*/