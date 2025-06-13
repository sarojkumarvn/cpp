#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]); // Final swap to place pivot in correct position
    return j;               // Return pivot index
}

// Recursive QuickSort function
void qs(int arr[], int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);   // Fix 1: correct function name
        qs(arr, low, pIndex - 1);                 // Fix 2: pass array properly
        qs(arr, pIndex + 1, high);
    }
}

// Wrapper function
void quickSort(int arr[], int n) {
    qs(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
