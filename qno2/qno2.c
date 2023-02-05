//WAP to calculate sum of even numbers
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number upto where you want to print sum of n even numbers:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(2*i);
}
printf("%d",sum);
return 0;
}
