//Store a character string in a block of memory space created by malloc
//then modify the same to store a larger string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NULL 0

int main()
{
    char *buffer;
    //Allocating memory
    if ((buffer = (char*)malloc(10)) == NULL)
    {
        printf("malloc failed.\n");
        exit(1);
    }
    printf("Buffer of size %d created \n",_msize(buffer));
    strcpy(buffer,"HYDERABAD");
    printf("Buffer contains: %s \n",buffer);

    //Reallocation
    if((buffer = (char *)realloc(buffer,15)) == NULL)
    {
        printf("Reallocation failed.\n");
        exit(1);
    }
    printf("Buffer size modified. \n");
    printf("Buffer of now size %d contains %s\n",_msize(buffer),buffer);
    strcpy(buffer,"SECUNDERABAD");
    printf("Buffer of size %d now contains %s\n",_msize(buffer),buffer);

    free(buffer);
}