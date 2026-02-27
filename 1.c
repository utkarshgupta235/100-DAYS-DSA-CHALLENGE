#include<stdio.h>

int main(){

 char another ; // IF WE WANT TO RUN A LOOP UNKNOWN NO. OF TIMES USE THIS
 int num ;
 do
 {
 printf ( "Enter a number : ") ;
 scanf ( "%d", &num ) ;
 printf ( "Square of %d is : %d", num, num * num ) ;
 printf ( "\nWant to enter another number :  " ) ;
 scanf ( " %c", &another ) ;
 } while ( another == 'y' || another=='Y' ) ;





return 0;
}