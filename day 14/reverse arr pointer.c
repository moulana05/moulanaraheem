#include<stdio.h>
int main() 
{
    int arr[]={1, 3, 5, 7, 9};
    int *p = arr;
    for(int i=4; i >=0; i--)
        printf("%d\n", *(p+i));
    return 0;
} 