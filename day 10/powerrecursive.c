#include <stdio.h>
int power(int a, int b) {
    if (b == 0) 
    {
        return 1;
    }
    return a * power(a, b - 1);
}
int main() {
    printf("THE RESULT IS : %d\n", power(2, 3));
    return 0;
}