#include<stdio.h>
int main()
{
 int n,sum;
 printf("Enter the 3 digits number\n");
 scanf("%d",&n);
 sum=n%10;
 n=n/10;
 sum=n%10+sum;
 n=n/10;
 sum=n%10+sum;
 printf("sum of the digits is %d",sum);
 return 0;
}
