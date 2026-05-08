#include<bits/stdc++.h>
using namespace std;

void EvenOdd(int  arr[], int size){
    
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){

        cin>>arr[i];
    }
    int even[size],odd[size];
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            even[i] = arr[i];
        }
        else{
            odd[i] = arr[i];
        }
    }
    cout<<"Even numbers are: ";
    for(int i=0; i<size; i++){
        if(even[i] != 0){
            cout<<even[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd numbers are: ";
    for(int i=0; i<size; i++){
        if(odd[i] != 0){
            cout<<odd[i]<<" ";
        }
    }
    cout<<endl;
}

// void Saymyname(){
//     cout<<"Fiza";
// }

int main(){
    int size = 5;
    int arr[size];
    
    EvenOdd(arr, size);

    // int size = 5;
    // int arr[size];

    //  cout<<"Enter the elements of the array: ";
    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
        
    // }
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
        
    // }
    // Saymyname();
    // return 0;
    int x = 10;
    cout<< "value of x is:"  << x << endl;
}