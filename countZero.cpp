#include<bits/stdc++.h>
using namespace std ;

//Given a positive integer n, write a recursive function to count the number of zeros present in it.




int main (){
  string s  = "105080010540101015160"; // using this for  long numbers 
  
  int count = 0 ;

  for(char c : s){
    if ( c == '0' ) {
        count ++;
    }
  }
  cout<< count ; 



    return 0 ;

}