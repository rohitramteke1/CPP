// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> vec;
    vec.reserve(6);

    // // Assign the values to the constant vector
    // vec.assign(7, 100);
    
    // for (auto &v : vec)
    //     cout << v << " " ;

    // cout << "\nSize of first: " << vec.size() << endl;

    // push_back()
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    // vec.pop_back();
    
    // Inserting a new element
    vec.insert(vec.begin()+2, 100);
    // clear all the elements
    // vec.clear();
    // erase the specific elements erase takes two argument
    vec.erase(vec.begin());
    // vec.erase(vec.begin(), vec.end()); 
    // iterate over the elements
    cout << "Printing the vector elements: " << endl ;
    for (auto v : vec)
    {
        cout << v << ' ' ;
    }
    vec.emplace(vec.begin(), 15);
    cout << "\nVec.size(): " << vec.size() << endl ; 
    cout << "Vec.capacity(): " << vec.capacity() << endl ; 

    cout << "The vector elements are: ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
        
    cout << "\nVec.size(): " << vec.size() << endl ; 
    cout << "Vec.capacity(): " << vec.capacity() << endl ; 
    return 0;
}