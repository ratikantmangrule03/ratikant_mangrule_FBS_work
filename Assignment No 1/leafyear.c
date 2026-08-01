#include <stdio.h>
int main()
{
 int year = 1800;
 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
 {
  printf("Year is Leaf");
 }
 else
 {
  printf("Year is not Leaf");
 }
 return 0;
}