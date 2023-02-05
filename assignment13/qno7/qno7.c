//WAP to find the HCF of a number
#include<stdio.h>
int hcf(int n1,int n2)
{
if(n2==0)
return n1;
else
return hcf(n2,n1%n2);
}
int main()
{
int n1,n2;
printf("Enter the two numbers:\n");
scanf("%d %d",&n1,&n2);
printf("%d",hcf(n1,n2));
return 0;
}
