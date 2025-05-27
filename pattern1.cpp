#include <bits/stdc++.h>
using namespace std;
void pattern1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j = i; j++)
        {
            cout << j << "";
        }
        cout << endl;
    }
}
void pattern5()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6()
{
    for (int i = 1; i < 6; i++)
    { // This line is correct
        for (int j = 1; j <= 6 - i; j++)  // j = 1 to 6 - i (done)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    // pattern1();
    pattern6();
    return 0;
}
