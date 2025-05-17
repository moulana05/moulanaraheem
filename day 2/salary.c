#include <stdio.h>

int main() {
  float basic_salary, hra, da, gross_salary;
  printf("Enter basic salary: ");
  scanf("%f", &basic_salary);
  printf("Enter HRA: ");
  scanf("%f", &hra);
  printf("Enter DA: ");
  scanf("%f", &da);
  gross_salary = basic_salary + hra + da; 
  printf("Gross salary: %.2f\n", gross_salary);
  return 0;
}