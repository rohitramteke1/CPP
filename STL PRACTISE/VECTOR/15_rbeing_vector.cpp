#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    // vector<int> vec;
    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);
    // vec.push_back(50);

    // // vector<int>::iterator iter;

    // // for (auto iter = vec.rbegin(); iter != vec.rend(); iter++)
    // // {
    // //     cout << *iter << " " ;
    // // }

    // // Reverse iterator
    // auto iter = vec.rbegin();
    // auto iter_end = --vec.rend();
    // // We can change the value
    // *iter = 100;
    // cout << *iter << endl ;
    // cout << *iter_end << endl ;

    // We can't change the value
    vector<string> string_vec;
  
    // 5 string are inserted
    string_vec.push_back("first");
    string_vec.push_back("second");
    string_vec.push_back("third");
    string_vec.push_back("fourth");
    string_vec.push_back("fifth");

    // cbegin(), cend()
    for(auto iter = string_vec.cbegin(); iter != string_vec.cend(); ++iter)
    {
        cout << "\"" << *iter << "\" " ; 
    }
    cout << endl ;
    // cbegin(), cend()
    for(auto iter = string_vec.cend()-1; iter >= string_vec.cbegin(); --iter)
    {
        cout << "\"" << *iter << "\" " ; 
    }
    cout << endl ;
    for(auto i = string_vec.crbegin(); i != string_vec.crend(); i++)
    {
        cout << *i << ' ';
    }
    
    
    return 0;
}