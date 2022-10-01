#include <iostream>
#include <set>

using namespace std;

// set follows the binary search tree implementation
// The values in a set are unindexed.

int main()
{
    // set<int> val;                 // defining an empty set
    // set<int> val = {6, 10, 5, 1}; // defining a set with values
    set<int, greater<int>> s;
    
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(9);
    s.insert(0);
    s.insert(4);

    // Try to add the same element's
    s.insert(4);
    s.insert(0);
    

    cout << "set.max_size() " << s.max_size() << endl;
    cout << "set.size() " << s.size() << endl;
    cout << "set.empty() " << s.empty() << endl;

    set<int, greater<int>>::iterator it;
    
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    // assigning elements from set1 to set2 ascending order
    set<int> s2(s.begin(), s.end());
    for (it = s2.begin(); it != s2.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    // remove all elements up to 5 in s2
    cout << "\ns2 after removal of elements less than 5 \n";
    s2.erase(s2.begin(), s2.find(5));
    for (it = s2.begin(); it != s2.end(); it++) {
        cout << *it << " ";
    }

    int num;
    num = s2.erase(5);
    cout << "\ns2.erase(5): " << num << endl ;
    cout << num << " removed" << endl ;

    for (it = s2.begin(); it != s2.end(); it++) {
        cout << *it << " ";
    }
    // lower bound and upper bound for set s1
    cout << "\ns.lower_bound(9) :"
         << *s.lower_bound(9) << endl;
    cout << "s.upper_bound(9) :"
         << *s.upper_bound(9) << endl;
    

    return 0;
}