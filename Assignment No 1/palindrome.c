#include <stdio.h>
int main()
{
 int n = 121;
 int x, rev;

 x = n;
 if (n >= 100 || n <= 999)
 {
  while (n > 0)
  {
   rev = (rev * 10) + n % 10;
   n = n / 10;
  }
  if (rev == x)
  {
   printf("Numbre is Palindrome");
  }
  else
  {
   printf("Number is not Palindrome");
  }
 }
 return 0;
}