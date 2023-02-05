#include<stdio.h>
int main()
{
 float sub1,sub2,sub3,sub4,sub5,obt_marks,percent;
 printf("Enter the marks of the subjects\nmaths=");
 scanf("%f",&sub1);
 printf("\nscience=");
 scanf("%f",&sub2);
 printf("\nsocial studies=");
 scanf("%f",&sub3);
 printf("\nhindi=");
 scanf("%f",&sub4);
 printf("\nenglish=");
 scanf("%f",&sub5);
 obt_marks=sub1 +sub2+sub3+sub4+sub5;
 percent=(obt_marks/500)*100;
 printf("percentage is %f\n",percent);
 if(percent>33)
 {
 printf("Result statement=passed\n");
 }
 else
 {
 printf("Result statement=failed");
 }
 return 0;
}
