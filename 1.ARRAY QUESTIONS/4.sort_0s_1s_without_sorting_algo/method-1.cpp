#include<iostream>

using namespace std;

int main() {
    
    int arr[10] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1};

    int numberOfZero = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            numberOfZero++;
        }
    }


    for (int i = 0; i < numberOfZero; i ++) {
        arr[i] = 0;
    }

    for (int i = numberOfZero; i < size; i++ ) {
        arr[i] = 1;
    }


    for (int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}