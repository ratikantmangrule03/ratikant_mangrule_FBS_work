#include <stdio.h>
int main()
{
 float basic = 50, da, ta, hra, total;
 if (basic <= 5000)
 {
  da = basic * 10 / 100;
  ta = basic * 20 / 100;
  hra = basic * 25 / 100;
 }
 else
 {
  da = basic * 15 / 100;
  ta = basic * 25 / 100;
  hra = basic * 30 / 100;
 }
 total = da + ta + hra;
 printf("Basic : %.2f\n", basic);
 printf("da %.2f\n", da);
 printf("ta %.2f\n", ta);
 printf("hra %.2f\n", hra);
 printf("Total : %.2f\n", total);

 return 0;
}