#include<bits/stdc++.h>
using namespace std ;


int powerOfNum(int a , int n ) {
    if ( n == 0 ) return 1 ;
    return a * powerOfNum( a , n-1);

}

int main () {

int result = powerOfNum(2,4);
cout  << result <<  " ";

     return 0 ;

}