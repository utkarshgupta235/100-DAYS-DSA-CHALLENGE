#include<iostream>
using namespace std ;
char convert(char name)
{
  char ans ;
ans = (name - 'a') + 'A';
return ans ;
}
int main(){
char alpha ;
cout<<"Enter any alphabet : ";
cin>>alpha;
cout<<convert(alpha);
  return 0 ;
}