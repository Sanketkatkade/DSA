#include<iostream>
using namespace std;

int findElement(int arr[5],int key){
    for(int i = 0; i < 5; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int key = 87;
    int arr[5] = {23,5,32,56,87};
    int res = findElement(arr,key);
    cout<<res<<endl;
    return 0;
}