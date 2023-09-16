#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++){
        int curnt=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>curnt)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curnt;

        
    }

   
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
