/*Program to calculate average for whatever number of numbers teh user enters*/
#include <stdio.h>  

void main()
{
    int count, turn;
    float number, sum, average;
    printf("How many numbers do you want to check the average for?\n");
    scanf("%d", &count);

    turn = 1;
    sum = 0;

    printf("Enter your numbers\n");
    
    /*Loop time baby!*/
    /*Enabling user to enter the numbers*/

    while(turn<=count)
    {
        scanf("%f",&number);
        sum = sum + number;
        turn++;
    }

    average = sum/count;
    printf("The average is: %f\n", average);
    printf("Have a good day!\n");
}