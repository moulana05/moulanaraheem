#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, avg;
    printf("Enter marks for 5 subjects: ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    avg = (m1 + m2 + m3 + m4 + m5) / 5;
    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35) {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass\n");
        
        if (avg >= 90)
            printf("Grade: A\n");
        else if (avg >= 80)
            printf("Grade: B\n");
        else if (avg >= 70)
            printf("Grade: C\n");
        else if (avg >= 60)
            printf("Grade: D\n");
        else
            printf("Grade: E\n");
    }

    return 0;
}
