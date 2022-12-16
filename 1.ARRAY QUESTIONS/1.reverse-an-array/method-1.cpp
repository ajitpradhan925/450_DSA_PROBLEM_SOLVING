#include<iostream>

using namespace std;

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i ++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

void reverseArray(int arr[], int length, int start, int end) {

    while(start < end) {

        int temp = arr[start];
        arr[start] = arr[end];

        arr[end] = temp;
        start ++;
        end --;
    }

    cout << endl;


    printArray(arr, length);

}



int main() {

    int arr[5] = {10, 9, 8, 7, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = size - 1; 

    reverseArray(arr, size, 0, end);
    return 0;
}