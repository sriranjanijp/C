#include <stdio.h>
int main()
{
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int i,j;
    for (i = 0;i<3;i++)
    {
        printf("Address of %dth array = %d %d\n",i,arr[i],*(arr+i));
        for (j = 0;j<2;j++)
        {
            printf(" %d %d",arr[i][j],*(*(arr+i)+j));
        }
        printf("\n");
    }
}