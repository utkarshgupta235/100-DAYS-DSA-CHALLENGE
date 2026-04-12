#include<iostream>
using namespace std ;
int main(){
int arr2[5] = {2,1,4,5,3} ;
int size = 5 ;
int xorr = 0 ;
for (int i = 0; i < size; i++)
{
xorr = xorr ^ arr2[i] ^(i+1);
}
xorr = xorr^(size+1);
// for (int i = 1 ; i <= size+1 ; i++)
// {
//   xorr = xorr ^ i ;
// }
cout<<xorr;

  return 0 ;
}