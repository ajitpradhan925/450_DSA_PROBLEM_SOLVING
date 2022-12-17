#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int k, size;

    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }

    size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the kth max number ";
    cin >> k;

    if (k > size) {
        cout << "The sequence does not exists";
        return 0;
    }

    cout << endl;


    sort(arr, arr + size);
    cout << "The sorted array is ";
    for (int i = 0; i < n; i ++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    cout << "The kth max element " << arr[size-k] << endl;

     cout << "The kth min element " << arr[k-1] << endl;

    return 0;

}