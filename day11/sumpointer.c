#include <stdio.h>
void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}
int main() {
    int x = 5, y = 7, result;
    add(&x, &y, &result);
    printf("Sum = %d\n", result);
    return 0;
}
