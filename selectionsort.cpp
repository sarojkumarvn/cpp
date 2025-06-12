#include <iostream>
using namespace std;

void selection_sort(int n, int arr[]) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for (int j = i + 1; j <= n-1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap arr[i] and arr[mini]
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[n]; // Declaring an array after knowing the size
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Taking the array input
    }

    selection_sort(n, arr); // Calling the  sorting function

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}
