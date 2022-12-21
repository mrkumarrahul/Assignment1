#include<stdio.h>
int main()
{
 int n,a,b,c,sum;
 printf("enter the 3 digits number\n");
 scanf("%d",&n);
 a=n%10;
 n=n/10;
 b=n%10;
 n=n/10;
 c=n%10;
 sum=a+b+c;
 printf("Sum of all three digits is %d",sum);
 return 0;

}
