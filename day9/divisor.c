#include <stdio.h>
int divisor(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    return sum;
}
int main() {
    int num;
    printf("Sum of the value : %d\n",divisor(10));
        return 0;
}
