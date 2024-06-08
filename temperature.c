#include <stdio.h>

#define F_LOW 0
#define F_MAX 250
#define STEP 25

void main()
{
    typedef float real;
    real farenheit, celsius;
    farenheit = F_LOW;
    printf("Farenheit   Celsius\n\n");
    while(farenheit<=F_MAX)
    {
        celsius = (farenheit - 32)/1.8;
        printf("%6.2f    %8.2f\n",farenheit,celsius);
        farenheit = farenheit + STEP;
    }

}