//WAP to calculate the power of a number
#include<stdio.h>
int pow(int n1,int n2)
{
 if(n2==1)
 return n1;
 else
 return n1*pow(n1,n2-1);
}
int main()
{
int n1,n2;
printf("Enter the base and exponent to calculate the power of the number:\n");
scanf("%d %d",&n1,&n2);
printf("The power of the number is %d",pow(n1,n2));
return 0;
}
