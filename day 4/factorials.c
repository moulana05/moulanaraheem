#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    if (num < 0) {
       printf("Factorial of negative numbers is not possible.");
    } else {
        printf("Factorial of %d = %lld", num, factorial(num));
    }

    return 0;
}