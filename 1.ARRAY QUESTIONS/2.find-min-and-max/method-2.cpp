// Using Recursion

#include<iostream>

using namespace std;

void checkMaxMin(int arr[], int size, int &min, int &max) {

    static int i;

    if (i == size) {
        i = 0;
        return;
    }



    // print the ith element


    if (arr[i] < min) {
        min = arr[i];
    }


    if (arr[i] > max) {
        max = arr[i];
    }

    cout << arr[i] << " ";  
    i++;    

    checkMaxMin(arr, size, min, max);
    
    
}

int main() {

    int arr[10] = {34, 67, 56, 32, 10, 65, 98, 78, 6, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    int &min = arr[0];
    int &max = arr[1];

    checkMaxMin(arr, size, min, max);

    cout << endl;

    cout << "Min " << min << endl;

    cout << "Max " << max << endl;


    return 0;    
}
