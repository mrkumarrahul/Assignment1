//WAP to calculate the sum of digits of a given number
#include<stdio.h>
int main()
{
int n,s;
printf("Enter a number to calculate the sum of digits of the number:\n ");
scanf("%d",&n);
s=sumofdigit(n);
printf("%d",s);
return 0;
}
int sumofdigit(int n)
{
if(n%10==n)
 return n;
 return n%10+sumofdigit(n/10);
}
