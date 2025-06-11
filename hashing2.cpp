#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  map<int, int> mapp;
  for(int i = 0; i < n; i++) {
    mapp[arr[i]]++;
  }

  // Find the element with the greatest frequency
  int maxFreq = 0;
  int mostFrequentNum = -1;

  for(auto it : mapp) {
    if(it.second > maxFreq) {
      maxFreq = it.second;
      mostFrequentNum = it.first;
    }
  }

  cout << "Element with Greatest Frequency: " << mostFrequentNum << " → " << maxFreq << " times" << endl;

  // Queries
  int q;
  cin >> q;
  while(q--) {
    int number;
    cin >> number;
    cout << mapp[number] << endl;
  }

  return 0;
}
