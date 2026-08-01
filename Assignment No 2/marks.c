#include <stdio.h>
int main()
{
 int sub1, sub2, sub3, sub4, sub5, sub6, t;
 float p;
 printf("Enter marks : ");
 scanf("%d %d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5, &sub6);
 t = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
 p = (t / 600.0) * 100;
 if (p >= 75)
 {
  printf("Distinction");
 }
 else if (p >= 65)
 {
  printf("First Class");
 }
 else if (p >= 55)
 {
  printf("Second Class");
 }
 else if (p >= 40)
 {
  printf("Pass Class");
 }
 else
 {
  printf("Fail");
 }
 return 0;
}