#include<iostream>
using namespace std ;
int main(){
int marks[5]={70,80,40,30,20};
int num ;
cout<<"Enter a number : ";
cin>>num;
bool found = false ;
for (int i = 0; i < 5; i++)
{
 if (num==marks[i])
 {
 found = true ;
 cout<<found;
 return 0 ;
 }
 
}
cout<<found;
  return 0 ;
}