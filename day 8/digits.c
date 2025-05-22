#include<stdio.h>
int countdigits(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;
    int count = 0;
    while (n) {
        n /= 10;
        count++;
    }
    return count;
}
int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countdigits(num));
    return 0;
}

