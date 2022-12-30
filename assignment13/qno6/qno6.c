//WAP to calculate the factorial of a number
#include<stdio.h>
int main()
{
int n,s;
printf("Enter a number whose factorial you want to print:\n");
scanf("%d",&n);
s=fact(n);
printf("%d",s);
return 0;
}
int fact(int n)
{
if(n==1)
return 1;
return n*fact(n-1);
}
