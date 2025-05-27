#include<stdio.h>
int main()
{
    int num = 8;
    if(num % 2 == 0)
    {
        printf("The %d is EVEN \n", num);
    }
    else
    {
        printf("The %d is ODD \n", num);
        return 0;
    }
}