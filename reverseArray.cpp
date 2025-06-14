#include <iostream>
using namespace std;

void reverseArray(int arr[], int l, int r) {  
    if (l >= r) return;
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}

int fibonacciNum (int n) {
    if ( n <= 1 ) return n ;

    return fibonacciNum(n-1) + fibonacciNum(n-2);
}



int main() {
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, 0, n - 1);  // No return value needed

    int result = fibonacciNum(n);
    cout << result << " " ;




    return 0;
}
