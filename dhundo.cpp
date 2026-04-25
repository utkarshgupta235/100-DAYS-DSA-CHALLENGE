#include<iostream>
using namespace std ;
int main(){
  int x ;
int create[5]={1,2,3,4,5};
cout<<"Enter the value of x : ";
cin>>x ;
for (int i = 0; i < 5 ; i++)
{
 if (create[i]==x)
 {
  cout<<"YES";
  return 0 ;
 }
 
}
cout<<"NO";

  return 0 ;
}