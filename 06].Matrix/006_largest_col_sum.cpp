#include<iostream>
using namespace std;

int largestRowSum(int arr[][4],int n,int m){
    int maxi = INT8_MIN;
    int col = 0;
   for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            col= j;
        }
    }
    cout<<"The maximum sum is "<<maxi <<" of col "<<col<<endl;
}

int main(){
     int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 56, 11, 12}};
    largestRowSum(arr, 3, 4);
    return 0;
}