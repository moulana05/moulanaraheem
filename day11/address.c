#include <stdio.h>
int main() {
    int x = 42;
    int *ptr = &x;  
    printf("Address of x: %p\n", ptr);    
    printf("Address of x using &: %p\n", (void*)&x);  
return 0;
}
