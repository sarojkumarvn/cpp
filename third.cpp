#include <bits/stdc++.h>
using namespace std;
void printMyName(string name)
{ // giving para meters to the function
    cout << "Hey " << name << endl;
}

void dosomething(string s)
{
    s[0] = 'M';
    cout << s << endl;
}

int main()
{
    string name = "saroj";
    printMyName(name); // callign function woth parameters
    string s = "saroj";
    dosomething(s);

    return 0;
}
