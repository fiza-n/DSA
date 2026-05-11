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
void func(int i ,  int n) {
    if( i == n) return;
    func(i+1, n);//backtracking call
    cout << i << " ";
}
int main() {
   // func(0,3);//TC- O(n) where n is the number of times the function is called, SC-O(n) due to recursive call stack
    //   func(4,1);

    func(1,4);
   
   return 0;
}