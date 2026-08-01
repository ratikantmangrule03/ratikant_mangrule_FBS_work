#include <stdio.h>
int main()
{
 int no1 = 2000;
 int no2 = 30;
 int no3 = 10;
 if (no1 > no2)
 {
  if (no1 > no3)
  {
   printf("The greatest no is : %d", no1);
  }
  else
  {
   printf("The greatest no is : %d", no3);
  }
 }
 else
 {
  if (no2 > no3)
  {
   printf("The greatest no is : %d", no2);
  }
  else
  {
   printf("The greatest no is : %d", no3);
  }
 }
 return 0;
}