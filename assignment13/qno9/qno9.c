#include<stdio.h>
int count(int n)
{
 static int c;
 if(n==0)
 return c;
 else
 c++;
 return count(n/10);
}
int main()
{
 int n;
 printf("Enter the number whose digit you want to count:\n ");
 scanf("%d",&n);
 printf("%d",count(n));
 return 0;
}
