#include<iostream>
using namespace std ;
int main(){
int x  , rem , ans = 0 , mul = 1 ;
cout<<"Enter a number : ";
cin>>x;
while (x!=0)
{
  rem = x%2 ;
  ans = ans + rem * mul ;
  mul = mul * 10 ;
  x = x / 2 ;
}
cout<<ans;

  return 0 ;
}