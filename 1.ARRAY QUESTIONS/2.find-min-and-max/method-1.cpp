#include<iostream>
using namespace std;


int main() {
    
    int arr[10] = {34, 67, 56, 32, 10, 65, 98, 78, 6, 2};

    int size = sizeof(arr)/sizeof(arr[0]);

    int max = 0;
    int min = arr[0];

    for (int i = 0; i < size; i ++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Max " << max << endl;
    cout << "Min " << min << endl;

    return 0;
}