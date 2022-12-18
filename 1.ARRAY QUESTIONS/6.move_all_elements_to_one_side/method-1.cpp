#include<iostream>
#include<bits/stdc++.h>

using namespace std;




int main() {

    int arr[] = {-3, 54, -3, 56, -78, 10, 30, -34};

    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[size];

    int elementCount = 0;

    for (int i = 0; i < size; i ++) {
        if (arr[i] < 0) {
            arr2[elementCount] =  arr[i];

            elementCount ++;
        }
    }

    for (int i = 0; i < size; i ++) {
        if (arr[i] > 0) {
            arr2[elementCount] =  arr[i];

            elementCount ++;
        }
    }

    for (int i = 0; i < size; i ++) {
        cout << arr2[i] << " ";
    }

    cout << endl;

    return 0;
}