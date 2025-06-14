#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0 ; i < n-1 ; i++){
        int mini = i;
        for(int j = i+1; j < n ; j++){
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++){ // n-1 passes
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void insertion_sort(int arr[] , int n) {
    for (int i = 0 ; i < n -1 ;  i++){
int j = i ;
while ( j > 0 && arr[j-1] > arr[j]) {
    int temp = arr[j-1];
    arr[j-1] = arr[j] ;
    arr[j] = temp;
    j--;
}



    }
}



int main() {
    int n = 5;
    int arr[n] = {12, 25, 10, 65, 80};

    // You can choose either sorting method
    // selection_sort(arr, n);
    insertion_sort(arr, n);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
