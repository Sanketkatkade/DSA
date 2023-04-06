#include<iostream>
using namespace std;

int insert(int arr[],int n,int x,int cap,int pos){
    if(n==cap){
        return n;
    }
    int index = pos - 1;
    for (int i = n-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    return n+1;
}

int main(){
    int arr[6]={1,2,3,4};
    int size = insert(arr,4,9,6,2);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
}
