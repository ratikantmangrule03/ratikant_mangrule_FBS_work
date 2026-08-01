#include <stdio.h>
int main()
{
 int n1, n2, result;
 char operator;

 printf("Enter first number : ");
 scanf("%d", &n1);
 printf("Enter operator (+, -, *, /) : ");
 scanf(" %c", &operator);
 printf("Enter second number : ");
 scanf("%d", &n2);

 if (operator == '+')
 {
  result = n1 + n2;
  printf("Addition is : %d", result);
 }
 else if (operator == '-')
 {
  result = n1 - n2;
  printf("Substraction is : %d", result);
 }
 else if (operator == '*')
 {
  result = n1 * n2;
  printf("Multiplication is : %d", result);
 }
 else if (operator == '/')
 {
  result = n1 / n2;
  printf("Division is : %d", result);
 }
 else if (operator == '%')
 {
  if (n2 == 0)
  {
   printf("Modulo by zero is not allowed");
  }
  else
  {
   result = n1 % n2;
   printf("Remainder is : %d", result);
  }
 }
 else
 {
  printf("Invalid input");
  return 0;
 }

 return 0;
}