#include <bits/stdc++.h>
using namespace std;

int second_larg(int arr[], int n)
{
    int res = -1;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
        return res;
}

int main()
{
    int arr[5] = {23, 4, 67, 83, 47};
    second_larg(arr, 5);
    return 0;
}
