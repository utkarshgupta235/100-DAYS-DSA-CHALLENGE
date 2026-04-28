#include<iostream>
using namespace std ;
void poweroftwo(int n)
{
  int rem ;
  if (n<1)
  {
    cout<<"NO";
    return ;
  }
  
  while (n!=1)
  {
    rem = n%2 ;
if (rem^0==1)
{
  cout<<"NO";
  return ;
}
n/=2 ;
  }
  cout<<"YES";
  return  ;
  
}
int main(){
int a  ;
cout<<"Enter a number : ";
cin>>a;
poweroftwo(a);
  return 0 ;
}