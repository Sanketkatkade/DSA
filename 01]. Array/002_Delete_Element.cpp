#include<iostream>
using namespace std;

int delet(int arr[], int n, int x, int cap, int pos) {
    int index = pos - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            for (int j = i; j < n-1; j++) {
                arr[j] = arr[j+1];
            }
            return n-1;
        }
    }
    return n;
}

int main() {
    int arr[6] = {1,2,3,4};
    int size = delet(arr, 4, 3, 6, 3);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
