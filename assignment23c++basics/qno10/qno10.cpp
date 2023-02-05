//c++ program to calculate the sum of 10 numbers using array
#include<iostream>
using namespace std;
int main()
{
 int a[10],i,sum=0;
 cout<<"Enter the 10 numbers\n";
 for(i=0;i<10;i++)
 {
  cin>>a[i];
 }
 /*for(i=0;i<10;i++)
 {

 cout<<a[i];
 }*/
 for(i=0;i<10;i++)
 {
     sum=sum+a[i];
 }
 cout<<"sum is" <<sum;
 cout<<endl;
 return 0;
 }
