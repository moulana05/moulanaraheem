#include <stdio.h>

int main() {
float num1, num2, result;
char operator;
    printf("Enter expression (e.g., 5 + 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);
    if (operator == '+') {
  result = num1 + num2;
  } 
  else if (operator == '-') {
  result = num1 - num2;
  }
  else if (operator == '*') {
  result = num1 * num2;
  }
  else if (operator == '/') {
  if (num2 != 0) {
  result = num1 / num2;
  } 
  else
  {
  printf("Error: Division by zero\n");
 return 0;
 }
    }
else 
{
 printf("Error: Invalid operator\n");
 return 0;
    }

  printf("Result: %.2f\n", result);
  return 0;
}
