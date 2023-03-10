#include <stdio.h>
void main ()
{
  int a = 0;
   printf("Enter a Number : ");
   scanf("%d",&a);

  int sum = 0;
  int rem = 0;
  do {
    rem = a%10;
    sum = sum + rem ;
    a = a/10;
  }while (a>0);
  printf("Sum of digit of your number is %d",sum);
}