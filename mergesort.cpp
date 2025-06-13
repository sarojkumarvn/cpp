#include <iostream>
#include <vector>
using namespace std;

// Merge function to merge two sorted halves
void merge(int arr[], int low, int mid, int high) {
    vector<int> temp; // we Use vector for dynamic sizing

    int left = low; // it is the first index of the array 
    int right = mid + 1; // it is the last index of the array

    // Merge the two sorted parts into temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left part, if any
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right part, if any
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive merge sort function
void ms(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    ms(arr, low, mid);      // sort left half
    ms(arr, mid + 1, high); // sort right half

    merge(arr, low, mid, high); // merge both halves
}

// Wrapper function
void mergeSort(int arr[], int n) {
    ms(arr, 0, n - 1);
    
    // in this the ms , we give 0 as low and n-1 as high
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, n);

    // print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
