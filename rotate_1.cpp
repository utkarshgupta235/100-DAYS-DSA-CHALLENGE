#include<iostream>
using namespace std ;
void printvalue(int a[], int n ){
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
}
int main(){
int rotate[6]={1,2,3,4,5,6};
int temp = rotate[5] ;
for (int i = 5; i >= 1 ; i--)
{
  rotate[i]=rotate[i-1];
}
rotate[0]=temp;
printvalue(rotate,6);
  return 0 ;
}