#include <stdio.h>
int main()
{
 char alp = '1';
 if (alp >= 'A' && alp <= 'Z')
 {
  printf("Character is uppercase");
 }
 else if (alp >= 'a' && alp <= 'z')
 {
  printf("Charater is lowercase");
 }
 else
 {
  printf("This is not an alphabet");
 }
 return 0;
}