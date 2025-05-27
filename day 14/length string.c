#include<stdio.h>
int main() 
{
    char a[50];
    int length=0;
    printf("Enter a line: ");
    fgets(a,50,stdin);
    while(a[length]!= '\0' && a[length]!= '\n')
    {
        length++;
    }
    printf("length of the string: %d", length);
    return 0;
}   