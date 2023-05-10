// #include <iostream>
// #include <vector>
// using namespace std;

// void leaders(int arr[], int n)
// {
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         bool is_leader = true;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] <= arr[j])
//             {
//                 is_leader = false;
//                 break;
//             }
//         }
//         if (is_leader)
//         {
//             v.push_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[7] = {11, 10, 4, 3, 2, 5, 2};
//     leaders(arr, 7);
//     return 0;
// }


//Another solution to find leaders in the array
// time complexity = o(n^2)

#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[7] = {11, 10, 4, 11, 2, 5, 2};
    leaders(arr, 7);
    return 0;
}