#include <stdio.h>
int main()
{
 int s1, s2, s3;
 printf("Enter 3 sides : ");
 scanf("%d %d %d", &s1, &s2, &s3);
 if (s1 == s2 && s2 == s3)
 {
  printf("Tringle is equilateral");
 }
 else if (s1 == s2 || s1 == s3 || s2 == s3)
 {
  printf("Tringle is isosceles");
 }
 else
 {
  printf("Tringle is scalene");
 }
 return 0;
}