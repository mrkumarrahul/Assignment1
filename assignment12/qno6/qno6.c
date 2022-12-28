//WAP to print even natural numbers in reverse
#include<stdio.h>
int main()
{
int n;
printf("Enter the number:\n");
scanf("%d",&n);
printRE(n);
return 0;
}
printRE(int n)
{
 if(n>0)
 printf("%d ",2*n);
 printRE(n-1);
}
