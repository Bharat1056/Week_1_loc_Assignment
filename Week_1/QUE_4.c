#include <stdio.h>
void main(){
  printf("Enter 1st Number : ");
  int num1;
  scanf("%d",&num1);
  printf("Enter 2nd Number : ");
  int num2;
  scanf("%d",&num2);
   // addition --> 1
   // multiplication --> 2
   // substraction --> 3
   // divison --> 4
   // remainder --> 5
  printf("Which operation you want : ");
  int ans;
  scanf("%d",&ans);
  switch(ans)
    {
      case 1 :
        int sum = num1 + num2;
        printf("Sum of these 2 numbers %d",sum);
      break;
      case 2 :
      int mul = num1*num2;
      printf("Multiplication of these 2 numbers %d", mul);
      break;
      case 3 :
        int sub = num1-num2;
        printf("Substraction of these 2 numbers %d", sub);
      break;
      case 4 :
        int div = num1/num2;
        printf("Divison of these 2 numbers %d", div);
      break;
      case 5 :
        int rem = num1%num2;
        printf("Remainder of these 2 numbers %d", rem);
      break;
    }
  
}