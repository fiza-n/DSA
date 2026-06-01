#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){

        int j = i; 
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
            cout<<"runs\n";//never runs on sorted array
        }
      
    }

}

int main(){

int n = 7;
    int arr[] = {1,2,4,3,5,6,7};
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
   
}
