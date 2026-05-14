#include<bits/stdc++.h>
using namespace std;

int count = 0;

// void func(){
//     if(count >= 5) return;  // Base case - stop when count reaches 5
    
//     cout<<count<< " ";
//     count++;
//     func();
// }

// void func(int i, int n){
//     if(i > n) return;

//     cout<<"fiza" << endl;
//     func(i+1, n);
// }

// void func(int i , int n){
//     if(i < n) return;
//     cout<<i<< " ";
//     func(i-1, n);
// }


//print from 1-n but i am not allowing you to use func(i+1) so now use backtracking to print from 1-n

// void func(int i ,  int n) {
//     if( i < 1) return;
//     func(i-1, n);//backtracking call
//     cout << i << " ";
// }
// void func(int i ,  int n) {
//     if( i == n) return;
//     func(i+1, n);//backtracking call
//     cout << i << " ";
// }

//sum of n numbers using recursion (parametrized recursion)
// void func(int i, int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     func(i-1, sum+i);
// }

//functional recursion 
// int func(int n) { 
//     if(n==0) return 0;

//     return n + func(n-1);
// }

//factorial of n using functional recursion
// int fact(int n) { 
//     if(n==0) return 1;

//     return n * fact(n-1);
// }

//reverse of array using functional recursion
// void reverseArray(int arr[], int n, int l, int r){
//     if(l>=r) return;
//     swap(arr[l], arr[r]);
//     reverseArray(arr, n, l+1, r-1);
// }


//reversewith one variable
// void reverseArray(int arr[], int n, int i){
//     if(i>=n/2) return;
//     swap(arr[i], arr[n-i-1]);
//     reverseArray(arr, n, i+1);
// }

//sum of array elements
// void sumArray(int arr[], int n, int i, int sum){
//     if(i == n) {
//         cout<<sum;
//         return;
//     }
//     sumArray(arr, n, i+1, sum + arr[i]);
// }

//check if a string is palindrome using recursion

// bool palindrome(string s, int n, int i){
//     if(i>=n/2) return true;
//     if(s[i] != s[n-i-1]) return false;

//     return palindrome(s,n,i+1);
// }
//countdown to zero

void countdown(int n){
    if(n<0) return;

    cout<<n<<" ";
    countdown(n-1);
}

int main() {
   // func(0,3);//TC- O(n) where n is the number of times the function is called, SC-O(n) due to recursive call stack
    //   func(4,1);

    // func(5,0);

    // cout<<func(3);
    // cout<<fact(4);

    // int n = 5;
    // int arr[n] = {1,2,3,4,5};
    // sumArray(arr, n, 0, 0);
    // // reverseArray(arr, n, 0);
    // // for(int i=0; i<n; i++){
    // //     cout<<arr[i]<<" ";
    // // }
   
    countdown(5);

// string s = "11211";
// if(palindrome(s, s.length(), 0)){
//     cout<<"Palindrome";
// }
// else{
//     cout<<"Not a palindrome";
// }
   return 0;
}