#include<stdio.h>
int main()
{
int n;
printf("Enter the number from where you want to print in reverse order:\n  ");
scanf("%d",&n);
printN( n);
printf("\n");
return 0;
}
printN(int n)
{
if(n>0)
printf("%d  ",n);
printN(n-1);
}
