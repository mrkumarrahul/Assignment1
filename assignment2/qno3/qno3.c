#include<stdio.h>
int main()
{
 int x,y,temp;
 printf("enter the two numbers you want to swap\n");
 scanf("%d %d",&x,&y);
 temp=x;
 x=y;
 y=temp;
 printf("Values of the variables after reverse is %d and %d",x,y);
 return 0;

}
