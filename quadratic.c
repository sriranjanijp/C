/*Solving a quadratic equation of the form ax^2+bx+c = 0*/

#include <stdio.h>
#include <math.h>

void main()
{
    float a,b,c,discriminant,r1,r2;
    printf("------------------------------------------\n");
    printf("Enter equation in the form - ax^2+bx+c = 0\n------------------------------------------\nenter a,b and c one after each other\n");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    if (discriminant < 0)
        printf("Roots are imaginary\n");
    else
    {
        r1 = (-b + sqrt(discriminant))/(2*a);
        r2 = (-b - sqrt(discriminant))/(2*a);

        printf("the roots are %f and %f\n", r1,r2);
    }
}

/*One song for the day - https://www.youtube.com/watch?v=UxXvOfLMgac*/