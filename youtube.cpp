#include<iostream>
using namespace std ;
void youtube(string photo , string title , int views , int time){
 cout<<"Print the thumbnail : "<<photo<<endl;
  cout<<"Print the title : "<<title<<endl;
  cout<<"Print the views : "<<views<<endl;
  cout<<"Print the Upload time : "<<time<<endl; 
}
int main(){
 
  string photo1 = "photo1.jpg" , title1 = "Book1" ;
  int views1 = 420 , time1 = 3 ; 
 string photo2 = "photo2.jpg" , title2 = "Java" ;
  int views2 = 500 , time2 = 6 ; 
youtube(photo1,title1,views1,time1);
cout<<endl;
youtube(photo2,title2,views2,time2);
  // cout<<"Print the thumbnail "<<photo1<<endl;
  // cout<<"Print the title "<<title1<<endl;
  // cout<<"Print the views "<<views1<<endl;
  // cout<<"Print the Upload time "<<time1<<endl; 

  //  cout<<"Print the thumbnail "<<photo2<<endl;
  // cout<<"Print the title "<<title2<<endl;
  // cout<<"Print the views "<<views2<<endl;
  // cout<<"Print the Upload time "<<time2<<endl; 

  return 0 ;
}