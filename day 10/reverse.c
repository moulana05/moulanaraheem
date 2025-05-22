#include <stdio.h>
int reverse(int n, int rev) 
{
    if (n == 0)
    {
    return rev;
    }
    else
    {
    return reverse(n/10,rev*10+n%10);
    }
}
int main()
{
    int num = 23;
    printf("Reversed Number: %d\n", reverse(num,0));
    return 0;
}