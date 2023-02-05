//WAP to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number upto where you want to print sum of N odd natural numbers:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(2*i-1);
}
printf("%d",sum);
return 0;
}
