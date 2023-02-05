//Write a program to check whether roots of a given quadratic equation are real and distinct ,real and equal or imaginary roots
#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c,discriminant,root1,root2,realpart,imgpart;
 printf("Enter the coefficient of quadratic equation\n");
 scanf("%lf %lf %lf",&a,&b,&c);
 discriminant=b*b-4*a*c;
 if(discriminant>0)
 {
  printf("Roots of the Equation is real and distinct ");
 }
 else if(discriminant==0)
 {
 printf("roots of the equation are real and equal");
 }
 else
 {
 printf("imaginary roots");
 }
 return 0;
}
