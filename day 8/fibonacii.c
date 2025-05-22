#include <stdio.h>
void printFibonacci(int n) {
    int a = 0, b = 1, next;
    while (a <= n) {
        printf("%d ", a);
        next = a + b;c
        a = b;
        b = next;
    }
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}

