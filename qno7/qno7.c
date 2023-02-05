//WAP to count number of digits in a given number
#include<stdio.h>
int main()
{
int i,n,count=0;
printf("Enter the number whose digits you want to calculate:\n ");
scanf("%d",&n);
while(n !=0)
{
    n=n/10;
    count++;
}
printf("The digits in the number is %d",count);
return 0;
}
