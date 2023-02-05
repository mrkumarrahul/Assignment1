#include<stdio.h>
int main()
{
 int cp,sp,loss,lossper,profit,profitper;
 printf("enter the cost price and selling price of the project\n");
 scanf("%d %d",&cp,&sp);
 if(cp>sp)
 {
  loss=(cp-sp);
  lossper=(loss/cp)*100;
  printf("loss=%d and loss percentage=%d",loss,lossper);

 }
 else
 {
 profit=(sp-cp);
 profitper=(profit/cp)*100;
 printf("profit=%d and profit percentage=%d",profit,profitper);
 }
 return 0;
}
