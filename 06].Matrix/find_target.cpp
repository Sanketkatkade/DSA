#include <iostream>
using namespace std;

int ispresent(int arr[][4], int target, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int target;
    cout << "Eneter the element to search" << endl;
    cin >> target;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int present = ispresent(arr, target, 3, 4);
    if (present)
    {
        cout << "The target is present" << endl;
    }
    else
    {
        cout << "The target is not present" << endl;
    }
    return 0;
}