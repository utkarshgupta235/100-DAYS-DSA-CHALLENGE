#include<iostream>
using namespace std ;
void print(int a[] , int n )
{
 
  for (int i = 0; i < n; i++)
  {
   cout<<a[i]<<endl;
  }
  
}
int main(){
int name[5]={11,22,33,44,55};
print(name,5);
  return 0 ;
}