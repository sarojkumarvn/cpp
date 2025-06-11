#include<bits/stdc++.h>
using namespace std ;



int fibonacci ( int n ){
    if ( n  <= 1) return n ;

   int last = fibonacci ( n - 1 ) ;
   int slast = fibonacci ( n - 2) ;
   return last + slast ;
    
}

int main () {
   int result =  fibonacci(1);
   cout << "Fibonacci of  is " << result << endl ;

    return 0 ;
}