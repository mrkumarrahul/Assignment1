//Write a program to check whether the given number is divisible by 5 or not
#include<stdio.h>
int main()
{
 int n;
 printf("enter the number\n");
 scanf("%d",&n);
 if(n%5==0)
 {
  printf("divisible ");
 }
 else
 {
  printf("not divisible");
 }
 return 0;
}
