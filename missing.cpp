#include<iostream>
using namespace std ;
int main(){
int missing[5] = {1,2,3,4,6} ;

// bool found = false ; bahar likhne se next number ke liye toh true hi rahega jis waje se code worl nhi karega
for (int i = 1 ; i <= 5+1; i++)
{
  bool found = false ;
  // array ko traverse karna for particular value i 
  for (int j = 0; j < 5; j++)
  {
    if (missing[j]==i)
    {
      found = true ;
      break;
    }
    
  }
  if (found == false)
  {
    cout<<i;

  }
  
}

  return 0 ;
}