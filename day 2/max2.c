#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("Maximum is %d\n", a);
    else
        printf("Maximum is %d\n", b);

    return 0;
}
