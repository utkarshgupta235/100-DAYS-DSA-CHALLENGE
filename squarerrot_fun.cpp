#include<iostream>
using namespace std ;
int root(int n)
{
  int i = 1 ;
  while (i*i<=n)
  {
    i++ ;
  }
  return i-1 ;
  
}
int main(){
int a  ;
cout<<"Enter any number : ";
cin>>a ;
cout<<root(a);
  return 0 ;
}