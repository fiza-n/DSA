#include<bits/stdc++.h>
using namespace std;

int main(){
//pairs

    // pair<int, int> p1 = {1,2};
    // cout<<p1.first<< " "<<p1.second<<endl;

    // pair<int, pair<int, int>> p2 = {1, {2,3}};//nested pair
    // cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    // pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    // cout<<arr[2].first<<" "<<arr[1].second<<endl;

    //vectors

//     vector<int> v = {1,2,3,4,5};
//     v.push_back(6);
//     cout<<v[5]<<endl;
//     // v.pop_back();
//     cout<<v[4]<<endl;
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.emplace_back(7);
//     cout<<v[6]<<endl;

//vector with pair data type

// vector<pair<int, int>> v;
// v.push_back({2,3});
// v.emplace_back(4,5);
// cout<<v[0].second<<endl;
// cout<<v[1].second<<endl;

// vector<int> vec(2,100);//vector of size 2 with all elements as 100
// cout<<vec[0]<<" "<<vec[1]<<endl; 

//vector with iterators
    // vector<int> v = {1,2,3,4,5};
    // vector<int>::iterator it = v.begin();
    // it++;
    // cout<< *it <<endl;//dereferencing the iterator to get the value without * it will give the address of the element

//vectors functions
//v.begin() , v.end()  , v.rbegin() , v.rend() , v.size() , v.capacity() , v.empty() , v.clear() , v.erase() , v.insert() , v.resize() , v.swap()

//list
    // list<int> l;
    // l.push_front(3);
    // l.push_back(4);
    // cout<<l.front()<<endl;//gives the first element of the list
    // cout<<l.back()<<endl;//gives the last element of the list
    //rest functions are same as vector but list does not have random access like vector so we cannot use [] operator to access the elements of the list we have to use iterators to access the elements of the list

//dequeue same as list
//     dequeue<int> d;
//     d.push_front(3);
//     d.push_back(4);

//stack (lifo data structure)

    // stack<int> st;
    // st.push(1);
    // st.push(2);//stack follows LIFO(last in first out) so the last element that we push last will be the first element that we pop
    // // st.pop();//removes the top element of the stack
    // cout<<st.top()<<endl;//gives the top element of the stack
    // cout<<st.size()<<endl;//gives the size of the stack
    // cout<<st.empty()<<endl;//gives true if the stack is empty otherwise false

//queue (fifo data structure)

    // queue<int> q;
    // q.push(1);
    // q.push(2);//queue follows FIFO(first in first out) so the first element that we push first will be the first element that we pop
    // q.pop();//removes the front element of the queue
    // cout<<q.front()<<endl;//gives the front element of the queue
    // cout<<q.back()<<endl;//gives the back element of the queue
    // cout<<q.size()<<endl;//gives the size of the queue
    // cout<<q.empty()<<endl;//gives true if the queue is empty otherwise false

//priority queue (max heap by default) gives priority to largest element

    // priority_queue<int> pq;
    // pq.push(3);
    // pq.push(1);
    // pq.push(4);
    // cout<<pq.top()<<endl;//gives the maximum element of the priority queue
    // pq.pop();//removes the maximum element of the priority queue
    // cout<<pq.top()<<endl;//gives the new maximum element of the priority queue

    // for(int i=0; i<2; i++){
    //     cout<<pq.top()<<" ";//gives the maximum element of the priority queue
    // }

    // priority_queue<int, vector<int>, greater<int>> minpq; //min heap gives priority to smallest element
    // minpq.push(1);
    // minpq.push(0);
    // minpq.push(2);
    // cout<<minpq.top()<<endl;//gives the minimum element of the priority queue
    
    //push -> log(n), pop -> log(n), top -> O(1)

//set (stores unique elements in sorted order)

    // set<int> s;
    // s.insert(3);
    // s.insert(1);
    // s.insert(4);
    // s.insert(2);
    // s.insert(2);//set does not allow duplicate elements so this will not be inserted in the set
    // for(auto it : s){
    //     cout<<it<<" ";//gives the elements of the set in sorted order
    // }
    // cout<<endl;
    // cout<<s.count(2)<<endl;//gives 1 if the element is present in the set otherwise 0
    // cout<<s.count(5)<<endl;//gives 0 if the element is not present in the set

    // auto it = s.find(5);//gives the iterator to the element if it is present in the set otherwise gives the iterator to the end of the set
    // cout<<*it<<endl;//dereferencing the iterator to get the value of the element if it is present in the set otherwise gives garbage value

    // s.erase(2);
    // for(auto it : s){
    //     cout<<it<<" ";//gives the elements of the set in sorted order after erasing the element 2 from the set
    // }

//multiset (stores duplicate elements in sorted order)

    // multiset<int> ms;
    // ms.insert(3);
    // ms.insert(1);
    // ms.insert(4);
    // ms.insert(2);
    // ms.insert(2);//multiset allows duplicate elements so this will be inserted in the multiset
    // for(auto it : ms){
    //     cout<<it<<" ";//gives the elements of the multiset in sorted order
    // }
    // ms.erase(2);
    // for(auto it : ms){
    //     cout<<it<<" ";//gives the elements of the multiset in sorted order after erasing all the occurrences of the element 2 from the multiset
    // }

    // ms.erase(ms.find(2));//erases only one occurrence of the element 2 from the multiset
    // for(auto it : ms){  
    //     cout<<it<<" ";//gives the elements of the multiset in sorted order after erasing one occurrence of the element 2 from the multiset
    // }

//map (stores key-value pairs in sorted order of keys)unique keys but can duplicate values

    // map<int, string> m;
    // m[1] = "one";
    // m[2] = "two";
    // m[3] = "three";
    // m[4] = "one";
    // for(auto it : m){
    //     cout<<it.first<<" "<<it.second<<endl;//gives the key-value pairs of the map in sorted order of keys
    // }
    // cout<<m.count(2)<<endl;//gives 1 if the key is present in the map otherwise 0
    // cout<<m.count(5)<<endl;//gives 0 if the key is not present in the map

    // auto it = m.find(2);//gives the iterator to the key-value pair if the key is present in the map otherwise gives the iterator to the end of the map
    // cout<<it->first<<" "<<it->second<<endl;//dereferencing the iterator to get the key-value pair if the key is present in the map otherwise gives garbage value


 }




 