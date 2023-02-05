//Write a program to check whether the given number is even or odd without using % operator
#include<stdio.h>1
int main()
{
int n;
printf ("enter a number\n");
scanf("%d",&n);
if(n&1==1)
{
 printf("odd number");
}
else
{
 printf("even number");
}
return 0;
}
