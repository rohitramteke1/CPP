#include <iostream>
#include <vector>   // for vectors
#include <iterator> // for iterators

using namespace std;

int main()
{

    vector<int> vec{0, 1, 2, 3, 4, 5};
    vector<int>::iterator iter;
    iter = vec.begin();

    // Using advance() to increment iterator position
    // points to 4
    advance(iter, 3);
    cout << *iter << endl ;

    // next(), prev()
    vector<int>::iterator begin_it = vec.begin();
    vector<int>::iterator end_it = vec.end();

    // Using next to return new iterator
    vector<int>::iterator left_iter = prev(begin_it, 3);
    vector<int>::iterator right_iter = next(end_it, 3);
    

    for (iter = vec.begin(); iter < vec.end(); iter++)
    {
        cout << *iter << " ";
    }

    return 0;
}