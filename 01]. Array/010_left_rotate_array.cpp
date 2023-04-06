#include <iostream>
using namespace std;

void lRotateOne(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    lRotateOne(arr, 5);
    printArr(arr, 5);
    return 0;
}