#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else 
    {
        return (n % 10)+sum( n / 10);
    }
}
int main()
{
    int num=12;
    printf("SUM OF DIGIT : %d\n", sum(num));
    return 0;
} 