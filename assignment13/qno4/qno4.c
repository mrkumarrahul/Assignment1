#include<stdio.h>
int main()
{
int n,s;
printf("Enter a number till you want to calculate the squares:\n");
scanf("%d",&n);
s=sq(n);
printf("%d",s);
return 0;
}
int sq(int n)
{
if(n==1)
 return 1;
 return n*n+sq(n-1);
}
