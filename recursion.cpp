#include <bits/stdc++.h>
using namespace std;

void f(int i, int n)
{
    if (i > n)
        return;
    cout << "Saroj ";
    f(i + 1, n);
}

void f2(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    f2(i + 1, n);
}

void f3(int i, int n)
{
    if (i < 1)
        return;
    cout << i << " ";
    return f3(i - 1, n);
}

void f4(int i, int n)
{
    if (i < 1)
        return;
    f4(i - 1, n);
    cout << i << " ";
}

void f5(int i, int n)
{
    if (i > n)
        return;
    f5(i + 1, n);
    cout << i << " ";
}


int f6(int n) {
    if (n == 0) {
        return 0;
    }
    return n + f6(n - 1);
}


int f7(int n) {
    if (n == 1) {
        return 1;
    }
    return n * f7(n - 1);
}

void reverseArray(int a[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(a[l], a[r]);
    reverseArray(a, l + 1, r - 1);
}

bool f8( int i , string &s ){
 if( i>= s.size() / 2 ) return true ;
 if (s[i] != s[s.size() - i - 1]) return false ;
 return f8(i+1  , s);

}

int main() {
    // int arr[8] = {1, 2, 45, 65, 7, 2, 1, 23};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // reverseArray(arr, 0, size - 1);

    // cout << "Reversed array: ";
    // for (int i = 0; i < size; ++i) {
    //     cout << arr[i] << " ";
    // }
    string s = "madam";
    cout << f8(0 , s );

    return 0;

    // int n = 10;
    // int result = f7(n);
    // cout << "Factorial = " << result << endl;

    // int sum = 0 ;
    // int i = 1;
    // f(i, n);

    // f2(i , n);
    // f3( 10 , 10 ) ;
    // f4(10, 10);
    // f5(1 , 10 ) ;
   
    // return 0;
}