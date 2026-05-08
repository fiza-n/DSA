#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArrayByD(int arr[], int n, int d) {
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}       
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    rotateArrayByD(arr, n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
