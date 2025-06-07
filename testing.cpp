#include <bits/stdc++.h>
using namespace std;
void testing1()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    { // outer
        int number;
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i)
                number = 1;
            else
                number = 2;
            cout << number;
        }
        cout << endl;
    }
}

void easypattern1()
{
    // outer loop
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // part 2

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << "*";

        }
        cout << endl ;
    }
}

int main()
{
    easypattern1();
    return 0;
}