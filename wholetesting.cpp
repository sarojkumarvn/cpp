#include <bits/stdc++.h>
using namespace std;

void hourglassPattern(int n)
{

    // outer loop

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 0; j < i - 1; j++)
        {
            cout << " ";
        }

        // number
        int number = i;
        for (int j = number; j <= n; j++)
        {
            cout << j;
        }

        // space
        for (int j = 0; j < i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void ninjaPattern()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        // number
        int initNum = i + 1;
        cout << initNum;
        // second space
        int secondSpaceStartPoint = n - i;
        for (int j = secondSpaceStartPoint; j >= 0; j--)
        {
            cout << " ";
             j -= 2;
        }

        // number
        if (initNum < n)
            cout << initNum;
        // space

        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void printdivisors(){
   int n = 36 ;
   for(int i = 1 ; i <= n ; i++){
    if ( n % i == 0 ) cout << i << " ";
}
cout << endl ;
}

int main()
{

    // Write your code here
    // int n;
    // cin >> n;
    // hourglassPattern(n);
    // ninjaPattern();
    printdivisors();

    return 0;
}
