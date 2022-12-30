#include<stdio.h>
int sumofnat(int n)
{
if(n==1)
return 1;
return n+sumofnat(n-1);
}
int main()
{
int n,s;
printf("Enter the natural number till you want to print the sum:\n");
scanf("%d",&n);
s=sumofnat(n);
printf("%d",s);
return 0;
}
