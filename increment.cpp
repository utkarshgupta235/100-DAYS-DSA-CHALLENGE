#include<iostream>
using namespace std ;
// pass by reference
void increment(int &n){
  n++;
}
int main(){
int a = 10 ;
// cout<<"Input a number : ";
// cin>>a;
increment(a);
cout<<a;

  return 0 ;
}