//WAP to convert decimal into binary
#include<stdio.h>
int main()
{
int n;
printf("enter the number you want to convert into binary:\n");
scanf("%d ",&n);
dtob(n);
return 0;
}
void dtob(int n)
{
if(n>0)
dtob(n/2);
printf("%d",n%2);
}
