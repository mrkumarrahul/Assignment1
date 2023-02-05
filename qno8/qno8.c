//WAP to check whether the number is prime or not
#include<stdio.h>
int main()
{
int n,flag=1,i;
printf("Enter a number:\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=2;
break;
}
}
if(flag==1)
  printf("prime");
else
  printf("Non prime");
  return 0;
}
