#include<stdio.h>
int main()
{
int n,d;
printf("enter a number and a digit\n");
scanf("%d %d",&n,&d);
n=n*10+d;
printf("The new number is %d",n);
return 0;
}
