#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3 ,sum=0;
    float avg;
    
    cout<<"Enter three number :";
    cin>>num1>>num2>>num3;
    sum=num1+num2+num3;
    avg=sum/3;
    
    cout<<"average of 3 numbers." <<avg;

    return 0;
}