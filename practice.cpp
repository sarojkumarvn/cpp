#include <bits/stdc++.h>
using namespace std;

// Print 1 to N
void printNum(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    printNum(i + 1, n);
}

// Print N to 1
void printRevNum(int i) {
    if (i < 1) return;
    cout << i << " ";
    printRevNum(i - 1);
}
int printFactorial(int n ) {
    if ( n == 1) return 1 ;
    return n * printFactorial(n - 1);
}

int printSumOfNum(int n) {
    if (n==1 ) return 1;
    return n + printSumOfNum(n - 1);
}

bool isPalindrome(string s , int i  ) {
    int n = s.size();
    if(i >= n/2) return true ;
    if(s[i] != s[n-i-1]) {
        return false;
    }

    return isPalindrome(s,i+1);
}

void reversArray(int arr[] , int l , int r  ) {  
    if(l >= r ) return ;
    swap(arr[l] , arr[r]);
    reversArray(arr, l+1 , r-1);
}

int main() {

 int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, 0, n - 1);  // No return value needed

    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
