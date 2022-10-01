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

    for (auto &v : vec)
    {
        cout << v << " " ;
    }
    cout << "\nReference operator [0] : vec[0] " << vec[0] << endl ;
    cout << "\nat vec.at(0)" << vec.at(0) << endl ;
    cout << "\nfront() : vec.back() = " << vec.front() << endl ;
    cout << "\nback() : vec.back() = " << vec.back() << endl ;

    vector<int>::iterator iter;
    iter = vec.begin();

    cout << &(*iter) << endl ; // first element address
    cout << vec.data() << endl ; // first element address 

    return 0;
}