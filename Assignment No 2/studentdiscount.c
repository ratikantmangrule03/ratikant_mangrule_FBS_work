#include <stdio.h>
int main()
{
 float price, discount, finalprice;
 char student;

 printf("Enter you purchase price : ");
 scanf("%f", &price);

 printf("If you are a student then enter y or if you are not a student then enter n : ");
 scanf(" %c", &student);

 if (student == 'y' || student == 'Y')
 {
  if (price > 500)
  {
   discount = price * 20 / 100;
  }
  else
  {
   discount = price * 10 / 100;
  }
 }

 else if (student == 'n' || student == 'N')
 {
  if (price > 600)
  {
   discount = price * 15 / 100;
  }
  else
  {
   discount = 0;
  }
 }

 else
 {
  printf("Invalid input");
  return 0;
 }

 finalprice = price - discount;

 printf("Purchase price : %.2f\n", price);
 printf("Discount price : %.2f\n", discount);
 printf("Final price : %.2f\n", finalprice);

 return 0;
}