#include <stdio.h>
#include <ctype.h> 

struct Employee {

    char name[100];
    int age;
    float salary;
};

void printLowerCase(char *str) {
    while (*str) {
    putchar(tolower(*str));  
    str++;
    }
}

int main() {
    struct Employee emp;
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("\nEmployee Details:\n");
    printf("Name: ");
    printLowerCase(emp.name); 
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
