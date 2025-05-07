#include <stdio.h>
#include <stdlib.h>

void accept(int*num,int size)
{
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }
}

void maxmin(int*num,int size, int* max, int* min)
{
    for(int i = 0;i<size;i++)
    {
        if (*max < *num)
            *max = *num;
        if(*min > *num)
            *min = *num;
        num++;
    }
}

void setmefree(int *num)    //Deallocation
{
    free(num);
    printf("I have set you free\n");
}

int main()
{
    int *num, size, max,min;
    printf("Enter no of athletes\n");
    scanf("%d",&size);
    num = (int *)malloc(size*sizeof(int));
    if(!num)
    {
        printf("Memory allocation failed! Even RM can't debug this. 😭\n");
        exit(1);
    }
    printf("Enter pushups by each\n");
    
    accept(num,size);
    max = min = *num;
    maxmin(num,size,&max,&min);
    printf("Maximum: %d\nMinimum: %d\n",max,min);

    setmefree(num);
}