#define PRINCIPAL 5000.00
#define PERIOD 10

void main()
{
    int year;
    float value, amount, inrate;

    year = 0;
    inrate = 0.11;
    value = PRINCIPAL;

    while(year<=PERIOD)
    {
        printf("%2d    %8.2f\n",year,value);
        amount = value + value*inrate;
        year++;
        value = amount;
    }
}