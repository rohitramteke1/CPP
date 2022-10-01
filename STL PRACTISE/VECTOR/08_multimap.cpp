#include <iostream>
#include <map>
#include <functional>
#include <vector>

using namespace std;

int main()
{
    multimap <char, int> Multimap; // deafult ascending
    // std::multimap <char, int, std::less<>> Multimap; // ascending
    // std::multimap <char, int, std::greater<>> Multimap; // descending
    
    Multimap.insert(pair<char, int>('a', 1));
    Multimap.insert(make_pair('a', 2));
    Multimap.insert(make_pair('a', 3));
    Multimap.insert(make_pair('b', 4));
    Multimap.insert(make_pair('b', 5));
    Multimap.insert(make_pair('c', 6));

    // Works in C++20
    // cout << Multimap.contains('a') << endl ;

    // auto pair = Multimap.find('a');
    // cout << pair->first << " " << pair->second << endl;

    // auto pair = Multimap.lower_bound('a');
    // cout << pair->first << " " << pair->second << endl;
    
    // Some error here
    auto pair = Multimap.upper_bound('a');
    cout << pair->first << " " << pair->second << endl;

    

    // for (auto &elm : Multimap){
    //     cout << elm.first << " " << elm.second << endl;
    // }
    
    return 0;
}