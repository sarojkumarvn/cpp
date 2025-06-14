#include <iostream>
using namespace std;

void reverseString(string &s, int l, int r) {
    if (l >= r) return;
    swap(s[l], s[r]);
    reverseString(s, l + 1, r - 1);
}

int main() {
    string s = "SAROJ";
    reverseString(s, 0, s.length() - 1);
    cout << s << endl; 
    return 0;
}
