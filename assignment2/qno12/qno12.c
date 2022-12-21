#include<stdio.h>
int main()
{
 int n,temp,r;
 printf("enter a 3 digit number\n");
 scanf("%d",&n);
 r=n%10;
 temp=n/10;
 n=r*100+temp;
 printf("The new number is %d",n);
 return 0;

}
