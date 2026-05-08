#include<bits/stdc++.h>
using namespace std;
bool IsArraysorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){

        }
        else {return false;}

    }
    return true;
}       
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if(IsArraysorted(arr, n))
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    
}
