#include<iostream>
using namespace std ;
int main(){ 
  int temp ;
int arr[6]={3,7,11,9,12,26};

for (int i = 0; i < 6/2; i++)
{
  temp = arr[i];
  arr[i]=arr[6-1-i];
  arr[6-1-i]=temp;
}

for (int i = 0; i < 6 ; i++)
{
  cout<<arr[i]<<" ";
}

  return 0 ;
}