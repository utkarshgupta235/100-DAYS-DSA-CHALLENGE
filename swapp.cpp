#include<iostream>
using namespace std ;
void swap(int &a , int &b){
  int c ;
  c = b ;
b = a ;
a = c ;
}
int main(){
int m  , n  ;
cout<<"Enter values of m and n : ";
cin>>m>>n;
swap(m,n); 
cout<<m<<" "<<n;

  return 0 ;
}