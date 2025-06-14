#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 123454;
    int sum = 0;
    int revNo = 0;
    // while (n > 0)
    // {
    //     int lastDigit = n % 10;
    //     sum += lastDigit;
    //     n = n / 10;
    // }
    // cout << sum;

    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        revNo = (revNo * 10) + ld;
    }

    cout << revNo;

    return 0;
}