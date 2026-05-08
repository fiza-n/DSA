#include<bits/stdc++.h>
using namespace std;

//Brute force approach
//First sort then find the second largest element
// int SecondLargestElement(int arr[],int n){
//     int largest = arr[n-1];
//     int secondlargest;

//     for(int i=n-2; i>0; i--){
//         if(arr[i] != largest){
//          secondlargest = arr[i];
//         }
//         return secondlargest;
//     }
//     return -1;
// }


//Optimal approach\

int SecondLargestElement(int arr[],int n){
   int largest = arr[0];
   int sLargest = -1;
   for(int i=1; i<n; i++){
    if(arr[i] > largest){
        sLargest = largest;
        largest = arr[i];
    }
    else if(arr[i] < largest && arr[i] > sLargest){
        sLargest = arr[i];
    }
   }
   return sLargest;
}
int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = 6;
   cout<< SecondLargestElement(arr,n);
}