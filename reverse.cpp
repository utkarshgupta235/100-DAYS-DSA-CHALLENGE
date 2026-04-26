#include<iostream>
using namespace std ;
void printarr(int arr[] , int size ){
  for (int i = 0; i < size ; i++)
  {
   cout<<arr[i]<<" ";
  }
  
}
int main(){
int arr1[6]= {11,22,33,44,55,66} ;
int size = 6 ;
for ( int i = 0; i < size/2 ; i++)
{
int temp = arr1[i] ;
arr1[i]=arr1[size-1-i] ;
arr1[size-1-i] = temp ;
}
printarr(arr1,size);
  return 0 ;
}