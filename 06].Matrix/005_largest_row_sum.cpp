#include<iostream>
using namespace std;

int largestRowSum(int arr[][4],int m,int n){
    int maxi = INT8_MIN;
    int row = 0;
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            row = i;
        }
    }
    cout<<"The maximum sum is "<<maxi <<" of row "<<row<<endl;
}

int main(){
     int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    largestRowSum(arr, 3, 4);
    return 0;
}