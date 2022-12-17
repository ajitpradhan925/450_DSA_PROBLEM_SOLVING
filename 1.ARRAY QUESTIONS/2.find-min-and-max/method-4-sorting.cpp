#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {

    int arr[10] = {34, 67, 56, 32, 10, 65, 98, 78, 6, 2};

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);

    cout << "The Min element in the following array is " << arr[0] << endl;
    cout << "The Max element in the following array is " << arr[size-1] << endl;

    return 0;
}



// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i ++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }