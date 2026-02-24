#include<iostream>
using namespace std ;
// declare and define karna function ko
// return_type function_name(parameter 1 , parameter 2 , paremeter 3) 
int factorial(int n){
  if (n<0){
    return 0 ;
  }
int ans = 1 ;
  for (int i = n ; i >= 1; i--)
  {
     ans = ans * i ;
  }
  return ans ; 
}
void sum(int x , int y ){
  int sum = x+y ;
  cout<<sum;
}
int main(){
int a , b ;
cout<<"Enter two numbers : ";
cin>>a>>b;
// function call

cout<<factorial(a)<<endl; // a matlab value ko pass karna
cout<<factorial(b)<<endl;
cout<<factorial(b-a)<<endl;
sum(a,b); // yaha par a and b ko arguments  bola jata haii
  return 0;
}