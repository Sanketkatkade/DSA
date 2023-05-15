#include <iostream>
#include <algorithm>
using namespace std;

int Majority_Element(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j]){
                count++;
            }
        }
        if (count > (n + 1) / 2){  
            return i;  
        }
    }
    return -1;  
}

int main(){
    int arr[7] = {20, 30, 40, 50, 50, 50, 50};
    int res = Majority_Element(arr, 7);
    cout << res << endl;
    return 0;
}
