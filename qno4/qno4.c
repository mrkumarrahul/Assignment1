//WAP to print the sum of squares of n natural numbers
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number upto where you want to print the square of n natural numbers:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;
}
printf("%d",sum);
return 0;
}
