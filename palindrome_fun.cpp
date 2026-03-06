#include<iostream>
using namespace std ;
bool palindrome(int n)
{
int rem , ans = 0 , org ;
org = n ;
while (n!=0)
{
  rem = n%10 ;
  ans = ans*10 + rem ;
  n/=10 ;
}
if (ans==org)
{
 return 1 ;
}
return 0 ;

}
int main(){
int a  ;
cout<<"Enter any number : ";
cin>>a ;
cout<<palindrome(a);
  return 0 ;
}