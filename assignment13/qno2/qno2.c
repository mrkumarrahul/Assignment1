//WAP to print sum of n odd natural numbers
#include<stdio.h>
int main()
{
int n,s;
printf("Enter a number till you want to print the sum:\n ");
scanf("%d",&n);
sumofodd(n);
s=sumofodd(n);
printf("%d",s);
return 0;
}
int sumofodd(int n)
{
if(n==1)
return 1;
return (2*n-1)+sumofodd(n-1);
}
