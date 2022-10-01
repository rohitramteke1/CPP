// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int main(){

    vector<int> vec;
    vec.reserve(10);
    // vec.resize(5);

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    // vector<int>::iterator iter;
    vector<int>::reverse_iterator iter;

    cout << endl ;
    for (iter = vec.rbegin(); iter != vec.rend(); iter++)
    {
        cout << *iter << " " ;
    }
    
    cout << "\nVector Size(): " << vec.size() << endl;
    cout << "Vector Max Size(): " << vec.max_size() << endl;
    cout << "Vector Capacity(): " << vec.capacity() << endl;
    // vec.resize(5);
    // vec.reserve(5);
    cout << "Vector empty(): " << vec.empty() << endl;

    // vector_name.resize()
    vec.resize(3);
    cout << "\nVector Size(): " << vec.size() << endl;

    // It'll destroy the element after-3
    vec.shrink_to_fit();

    // for (auto iter = vec.begin(); iter != vec.end(); iter++)
    for (auto &v : vec)
    {
        cout << v << " " ;
    }


    return 0;
}