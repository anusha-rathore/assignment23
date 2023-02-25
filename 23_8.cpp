#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter  numbers :";
    cin>>a>>b;
    cout<<"Before swap number :\n";
    cout<<"a:"<<a <<" b:"<<b<<endl;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"After swap number :\n";
    cout<<"a:"<<a<<" b:"<<b;
  

    return 0;
}