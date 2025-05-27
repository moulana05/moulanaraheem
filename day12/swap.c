#include<stdio.h>
int main()
{
    int a=5, b=12, temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value is: %d %d", a, b);
    return 0;
}