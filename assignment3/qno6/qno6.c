//Write a program to print greater number between two numbers,print one if both are same

#include<stdio.h>
int main()
{
int n1,n2;
printf("enter the two numbers\n");
scanf("%d %d",&n1,&n2);
if(n1>n2)
{
printf("number 1 is greater");
}
else if(n1==n2)
{
 printf("both the numbers are same and the number is %d",n1);
}
else
{
printf("number 2 is greater");
}
return 0;
}
