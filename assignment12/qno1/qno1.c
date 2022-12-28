#include<stdio.h>
int main()
{
int n;
printf("Enter the number upto you want to print the natural numbers:\n");
scanf("%d",&n);
printN(n);
printf("\n");
return 0;
}
printN(int n)
{
if(n>0)
{
printN(n-1);
printf("%d ",n);
}
}
