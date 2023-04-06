#include<iostream>
using namespace std;

int moveToEnd(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            for (int j = i+1; j < n; j++)
            {
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
            
        }
    }
    
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

int main(){
    int arr[5]={0,30,0,20,0};
    moveToEnd(arr,5);
    printArr(arr,5);
    return 0;
}