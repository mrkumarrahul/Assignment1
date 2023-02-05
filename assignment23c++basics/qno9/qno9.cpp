//c++ program to calculate the maximum among three numbers
#include<iostream>
using namespace std;
int main()
{
 int a,b,c,max;
 cout<<"Enter the three numbers\n";
 cin>>a>>b>>c;
 max=(a>b)?(a>c)?a:c:(b>c)?b:c;
 cout<<"The maximum is "<<max;
 cout<<endl;
 return 0;
}
