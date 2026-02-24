#include<iostream>
using namespace std ;
int main(){
  int ans = 0 , x = 0 ;
int missing[10]={1,2,3,4,5,6,7,9,8,11};
for ( int i = 0; i < 10 ; i++)  // XOR of whole array 
{
  ans = ans^missing[i] ; 
  // ans = ans^(i+1);
}
// xor of 1 to size+1
for (int i = 1 ; i <= 10+1 ; i++)
{
  x = x^i ;
}
x = x^ans ;
cout<<x ;



  return 0 ;
}