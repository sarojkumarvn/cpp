#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // inserted the array into the arr
    }

    // pre-compute
    int hashh[10] = {0};
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hashh[number] << endl;
    }

    return 0;
}
