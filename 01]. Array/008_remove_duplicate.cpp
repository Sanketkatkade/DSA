#include <iostream>
using namespace std;

int remDuplicate(int arr[], int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[result - 1])
        {
            arr[result] = arr[i];
            result++;
        }
    }
    return result;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {10, 20, 30, 30, 30};
    int newSize = remDuplicate(arr, 5);
    printArray(arr, newSize);
    return 0;
}