#include <iostream>

using namespace std;

int main()
{
  int a[10] ,i ,sum=0;
  cout<<"enter array elements:";
  for(i=0; i<10; i++)
  {
      cin>>a[i];
  }
  cout<<"{";
  for(i=0; i<10; i++)
  {
      cout<< " "<< a[i];
  
  }
  cout<<"}"<<endl;
  for(i=0; i<10; i++)
  {
      sum=sum+a[i];
  
  }
  cout<<"sum all the numbers of an array of size 10is  :"<<sum;
  
  return 0;
}