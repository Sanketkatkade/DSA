#include <iostream>
using namespace std;

int wavePrint(int arr[][4], int mRow, int nCol)
{
    for (int col = 0; col < nCol; col++)
    {
        if (col & 1)
        {
            for (int row = mRow - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < mRow; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 56, 11, 12}};
    wavePrint(arr, 3, 4);
    return 0;
}