#include<iostream>
using namespace std ;
int reverse(int n)
{
int rem , ans = 0 ;
while (n!=0)
{
  rem = n%10 ;
  ans = ans*10 + rem ;
  n/=10 ;
}
return ans ;

}
int main(){
int a  ;
cout<<"Enter any number : ";
cin>>a ;
cout<<reverse(a);
  return 0 ;
}