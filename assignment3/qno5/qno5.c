//write a program to check the given number is 3 digit number or not
#include<stdio.h>
int main()
{
 int n;
 printf("enter the number\n");
 scanf("%d",&n);
 if(n>99&&n<1000)
 {
 printf("three digits number");
 }
 else
 {
 printf("not a three digit number");
 }
 return 0;
}
