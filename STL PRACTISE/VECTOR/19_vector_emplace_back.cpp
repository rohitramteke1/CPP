// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
// #include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    vec.reserve(6);

    vec.emplace_back(10);
    vec.emplace_back(20);
    vec.emplace_back(30);
    vec.emplace_back(40);
    vec.emplace_back(50);

    for (auto &v : vec)
        cout << v << " ";

    // vec.emplace(vec.begin(), 15);
    // cout << "\nVec.size(): " << vec.size() << endl ;
    // cout << "Vec.capacity(): " << vec.capacity() << endl ;

    cout << endl;
    vector<char> char_vec;
    char_vec.reserve(6);
    char_vec.emplace_back('a');
    char_vec.emplace_back('b');
    char_vec.emplace_back('c');
    char_vec.emplace_back('d');
    char_vec.emplace_back('e');
    for (auto &v : char_vec)
        cout << v << " ";

    // This is something new
    vector<pair<int, char>> pair_vec;

    // using emplace to insert pair<int, char>
    pair_vec.emplace('a', 95);

    // using push_back() to insert
    vec.push_back(make_pair('b', 96));

    for (int i = 0; i < pair_vec.size(); i++)
    {
        cout << pair_vec[i].first << ' ' << pair_vec[i].second << endl;
    }

    return 0;
}