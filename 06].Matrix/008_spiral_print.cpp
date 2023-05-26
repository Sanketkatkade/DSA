#include<iostream>
#include<vector>
using namespace std;

void spiralPrint(int arr[][4], int m, int n) {
    vector<int> ans;
    int count = 0;
    int total = m * n;

    // index initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m - 1;
    int endingCol = n - 1;

    while (count < total) {
        // printing starting row
        for (int index = startingCol; index <= endingCol && count < total; index++) {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // printing ending column
        for (int index = startingRow; index <= endingRow && count < total; index++) {
            ans.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;
        

        // printing ending row
        for (int index = endingCol; index >= startingCol && count < total; index--) {
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        // printing starting column
        for (int index = endingRow; index >= startingRow && count < total; index--) {
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    // Printing the spiral order
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 56, 11, 12}
    };

    spiralPrint(arr, 3, 4);

    return 0;
}
