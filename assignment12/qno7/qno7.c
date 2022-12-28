//WAP to print squqres of n natural numbers
#include<stdio.h>
int main()
{
int n;
printf("Enter the number upto where you want to print:\n");
scanf("%d",&n);
printsq(n);
return 0;
}
printsq(int n)
{
    if(n>1)
printsq(n-1);
printf("%d ",n*n);
}
