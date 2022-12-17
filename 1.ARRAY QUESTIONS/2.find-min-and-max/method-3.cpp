#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
    
        int n;
        cin >> n;

        int arr[n];

      

        for (int i = 0; i < n; i ++) {
            cin >> arr[i];
        }

        int min = arr[0];
        int max = 0;

        for (int i = 0; i < n; i ++) {
            if (arr[i] < min) {
                min = arr[i];
            }

            if (arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "Max " << max << endl;
        cout << "Min " << min << endl;

        cout << "  " << endl;

        min = 0;
        max = 0;

    }
    

    return 0;
}