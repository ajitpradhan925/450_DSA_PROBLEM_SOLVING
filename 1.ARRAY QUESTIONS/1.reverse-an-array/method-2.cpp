#include<iostream>

using namespace std;

int main() {

    int arr[6] = {10,9,8,7,6,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i <= size; i ++) {
        cout << arr[size-i] << " ";
    }


    cout << endl;

    return 0;
}