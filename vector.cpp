#include<iostream>
#include<vector>
using namespace std ;
int main(){

vector<int>name(4);
name[0] = 1 ;
name[1] = 2 ;
name[2] = 4 ;
name[3] = 5 ;

name.push_back(3);
name.push_back(34);
// int n = name.size();
// cout<<n<<endl;
// for (int i = 0; i < n; i++)
// {
//   cout<<name[i]<<" ";
// }

name.pop_back();
int n = name.size();
cout<<n<<endl;
for (int i = 0; i < n; i++)
{
cout<<name[i]<<" ";
}

  return 0 ;
}