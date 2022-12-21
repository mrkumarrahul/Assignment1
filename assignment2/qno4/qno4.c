#include<stdio.h>
int main()
{
 int x,y;
 printf("enter the two numbers you want to swap\n");
 scanf("%d %d",&x,&y);
 y=x+y;
 x=y-x;
 y=y-x;
 printf("The values after reverse is %d %d",x,y);
 return 0;
}
