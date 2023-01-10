//WAP to calculate sum of n natural numbers
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number upto you want to print sum of n natural numbers:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum is %d",sum);
return 0;
}
