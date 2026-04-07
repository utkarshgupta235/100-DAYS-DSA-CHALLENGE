#include<iostream>
using namespace std ;
void print(int a[],int n){
  for (int i = 0; i < n; i++)
  {
   cout<<a[i]<<" ";
  }
}
int main(){
int reverse[6]={10,15,20,25,30,35};
for (int i = 0; i < 6/2; i++)
{
  int temp = reverse[i];
  reverse[i]=reverse[6-1-i];
  reverse[6-1-i]=temp;
}
print(reverse,6);

  return 0 ;
}