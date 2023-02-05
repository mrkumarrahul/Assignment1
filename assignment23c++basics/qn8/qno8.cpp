#include<iostream>
using namespace std;
int main()
{
 int x,y;
 cout<<"Enter the two numbers\n";
 cin>>x>>y;
 cout<<"x="<<x<< " and y="<<y;
 cout<<endl;
 x=x+y;
 y=x-y;
 x=x-y;
 cout<<"x="<<x<< "and y="<<y;
 cout<<endl;
 return 0;
}
