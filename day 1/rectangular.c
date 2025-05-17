#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("enter length: ");
    scanf("%f", &length);

    printf("enter width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("area = %.2f\n", area);
    printf("perimeter = %.2f\n", perimeter);

    return 0;
}
