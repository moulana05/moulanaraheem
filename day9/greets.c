#include<stdio.h>
void greet(char x[], char y[])
{
    printf("\n HELLO  %s", x);
    printf("\n WELCOME TO THE COMPANY AS A %s",y);
}
int main()
{
    greet(" RAMYA"," WEB DESIGNER");
    return 0;
}