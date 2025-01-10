#include <stdio.h>
int main()
{
    int m,n,x,j,count = 0;
    scanf("%d %d %d",&m,&n,&x);
    for (int i = m; i<=n; i++)
    {
        j = i;
        
        while (j>0)
        {
            if ((j%10)>3)
            count++;
            j = j/10;
        }  
          
    }
    printf("%d",count);
}