//using malloc and calloc
//Input list of numbers in range 0-4 and find frequency

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num,*freq,i,size;

    printf("Enter size of the list: ");
    scanf("%d",&size);
    num = (int *)malloc(size *sizeof(int));
    printf("\nEnter the numbers: ");
    for(i = 0;i<size;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&num[i]);
        if(num[i]<0||num[i]>4)
        {
            printf("\nNumber should be in the 0-4 range");
            i--;
        }
    }
    freq = (int*)calloc(5,sizeof(int));
    for(i=0;i<size;i++)
    {
        freq[num[i]]++;
    }
    printf("\nThe frequencies of the numbers: ");
    for(i=0;i<5;i++)
    {
        printf("\nfreq[%d]: %d",i,freq[i]);
    }
    free(freq);
    free(num);
    return 0;
}