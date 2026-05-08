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
    // int size = 5;
    // int arr[size];
    
    // EvenOdd(arr, size);

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
    // int x = 10;
    // cout<< "value of x is:"  << x << endl;

    // string str;
    // getline(cin, str);
    // cout<<str<<endl;

    // int age;
    // cout<<"Enter your age:\n";
    // cin>> age;
    // if(age >= 18) {
    //     cout<<" you are adult.\n";
    // }
    // else{
    //     cout<<"you are underage";
    // }

    int marks;
    cout<< "Enter you marks:\n";
    cin>> marks;
    if(marks<0 && marks > 100){
        cout<<"invalid marks\n";
    }
    
    else if(marks>= 80 && marks <=100){
        cout<<"you got grade A+\n";
    }
    else if(marks>=60 && marks<=79){
        cout<<"you got grade B\n";
    }
    else if(marks>=50 && marks<=59){
        cout<<"you got grade C\n";
    }
    else if(marks>=45 && marks<=49){
        cout<<"you got grade D\n";
    }
    else if(marks>=25 && marks<=44){
        cout<<"you got grade E\n";
    }
    else if(marks<25){
        cout<<"you got grade F\n";
    }
    else{
        cout<<"Invalid marks\n";
    }
    


}

