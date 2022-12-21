#include<stdio.h>
int main()
{
int x;
printf("enter a number\n");
scanf("%d",&x);
x=x/10;
x=x*10;
printf("Number after making its last digit 0 is %d",x);
return 0;
}
