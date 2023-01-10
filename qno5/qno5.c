//WAP to calculate the sum of cubes of n natural numbers
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the number upto where you want to print sum of cubes:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i*i*i;
}
printf("%d",sum);
return 0;
}
