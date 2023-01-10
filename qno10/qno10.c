//WAP to reverse the number
#include<stdio.h>
int main()
{
int n,rem=0,rev=0;
printf("Enter the number you want to reverse:\n");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
}
printf("%d",rev);
return 0;
}
