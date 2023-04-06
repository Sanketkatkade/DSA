#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[] = {23, 68, 67, 99, 848};
    bool sorted = isSorted(arr, 5);
    if (sorted)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}

// Another way to check array is sorted or not.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {23, 56, 67, 99, 848};
//     int count = 0;
//     for (int i = 0; i < arr.length(); i++)
//     {
//         if (arr[i] <= arr[i + 1])
//         {
//             count++;
//         }
//     }
//     if (count == 4)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }