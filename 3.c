#include<stdio.h>

int main(){

  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
// value of n gives user control to us 

// for(int i = 1; i <=n; i++) jo bhi n ki value user input karega utni baar loop chalega

  for (int i = 1; i <=n; i=i+2) 
  {
    printf("HELLO UPES\n");
  }
  
return 0;
}