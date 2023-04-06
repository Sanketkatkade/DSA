#include <iostream>
using namespace std;

void lRotateOne(int arr[], int n,int d)
{
    for (int i = 0; i < n ; i++)
    {
        
        swap(arr[i], arr[i+d]);
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
    int d=2;
    int arr[5] = {1, 2, 3, 4, 5};
    lRotateOne(arr, 5,d);
    printArr(arr, 5);
    return 0;
}