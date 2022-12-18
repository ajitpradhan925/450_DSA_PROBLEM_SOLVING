#include<iostream>

using namespace std;

int main() {

    int arr[10] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    int numOfZero = 0, numOfOne = 0;

    for (int i = 0; i < size; i ++) {
        if (arr[i] == 0) {
            numOfZero ++;
        }

        if (arr[i] == 1) {
            numOfOne ++;
        }
    }


    for (int i = 0; i < numOfZero; i++) {
        arr[i] = 0;
    }

    for (int i = numOfZero; i < numOfZero + numOfOne; i++) {
        arr[i] = 1;
    }

    for (int i = numOfZero + numOfOne; i < size; i++) {
        arr[i] = 2;
    }

    // Print Array
    for (int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }

}