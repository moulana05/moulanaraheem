#include<stdio.h>
int is_prefect(int n)
{
    int i , sum = 0 ;
    for(int i = 1; i<n; i++)
    {
        if(n%i==0)
        {
        sum = sum + i;
        }
    }
    if(sum==n)
    {
        printf("%d is perfect",n);
    }
    else{
        printf("%d not perfect",n);
    }
  return sum;
}
int main()
{
    is_prefect(28);
    return 0;
}
