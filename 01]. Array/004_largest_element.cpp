#include <iostream>
using namespace std;

void largestElement(int arr[], int n)
{
    int maxEle = 0;
    for (int i = 0; i < n; i++)
    {
        maxEle = max(maxEle, arr[i]);
    }
    cout << maxEle << endl;
}

int main()
{
    int arr[5] = {23, 100, 45, 78, 34};
    largestElement(arr, 5);

    return 0;
}

// This is the another approach to find maximum element

// #include <iostream>
// using namespace std;

// int largestElement(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = true;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[5] = {23, 100, 45, 78, 34};
//     cout << largestElement(arr, 5);

//     return 0;
// }


