#include<stdio.h>
int main()
{
int n;
printf("Enter the number upto where you want to print the odd natural numbers:\n ");
scanf("%d",&n);
printON(n);
return 0;
}
void printON(int n)
{
if(n>1)
printON(n-1);
 printf("%d ",2*n-1);


}

