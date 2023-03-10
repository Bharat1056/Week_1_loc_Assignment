#include <stdio.h>
void main()
{
  printf("Enter Radius of circle : ");
  float r;
  scanf("%f", &r);
  float area = 3.141*r*r;
  float diameter = 2*r;
  float cicumference = 2*3.141*r;
  printf("Area of circle is : %f\n",area);
  printf("Diameter of circle is : %f\n",diameter);
  printf("Circumference of circle is : %f",cicumference);
}