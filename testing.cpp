#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){ //outer
     int number ;
	 for(int j = 0 ; j < i ; j++){
       if( j == 0 || j == i) number = 1 ;
	   else number = 2 ;
       cout << number ;
	 }
	 cout << endl;
	}

    return 0;
}