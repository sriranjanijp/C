#include<stdio.h> 
int main()
{ 
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}}; 
    int (*ptr)[4];
    ptr = arr;
    printf("a: %p %p %p\n\n", ptr, ptr + 1, ptr + 2); 
    printf("b: %p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2)); 
    printf("c: %d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3)); 
    printf("d: %d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]); 
    return 0; 
}