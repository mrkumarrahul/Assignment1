#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n>0)
     printf("%d",n%10);
      reverse(n/10);

}
