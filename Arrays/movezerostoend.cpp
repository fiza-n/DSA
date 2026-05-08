#include<bits/stdc++.h>
using namespace std;

void movezerostoEnd(int arr[], int n){
    int temp[n];
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            temp[i] = arr[i];
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezerostoEnd(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}