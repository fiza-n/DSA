#include<bits/stdc++.h>
using namespace std;

    int largestElement(int arr[], int n) {
        int largest = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        return largest;
    }

int main(){
    int arr[] = {1, 2, 2,5,3};
    int n = 5;
   cout<< largestElement(arr,n);
}