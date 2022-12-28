#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number till you want to print:\n");
    scanf("%d ",&n);
    printEN(n);
    return 0;
}
void printEN(int n)
{
    if(n>1)
    printEN(n-1);
    printf("%d",2*n);
}
