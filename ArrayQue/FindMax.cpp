#include <iostream>
using namespace std;

void maxNum(int arr[7]){

    // int n = sizeof(arr[7]) / sizeof(arr[0]); 

    int maxNumber = arr[0]; 
    for (int i = 1; i <7; ++i) {

        if (arr[i] > maxNumber) {

            maxNumber = arr[i]; 

        }
    }

      cout << "Maximum number in the array: " << maxNumber << endl;

    
}

int main() {
    int arr1[7] = {5, 12, 8, 9, 15, 3, 7};
     maxNum(arr1);
}


//  output is = 15