#include<stdio.h>
void dtob(int n);
int main()
{
int n;
printf("enter a number:\n");
scanf("%d",&n);
dtob(n);
return 0;
}
void dtob(int n)
{
 if(n>0)
 {

 dtob(n/2);
 printf("%d",n%2);
 }
}
