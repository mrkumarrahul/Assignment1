//WAP to calculate factorial of a number
#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("Enter the number upto where you want to print fanctrial of number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}
