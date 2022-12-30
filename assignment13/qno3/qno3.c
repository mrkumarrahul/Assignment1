//WAP to calculate the sum of n even natural numbers
#include<stdio.h>
int main()
{
int n,s;
printf("Enter a number till you want to print sum of even natural numbers:\n");
scanf("%d",&n);
s=sumOfeven( n);
printf("%d",s);
return 0;
}
int sumOfeven(int n)
{
 if(n==1)
   return 2;
   return 2*n+sumOfeven(n-1);
}
