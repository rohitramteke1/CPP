#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1 = {5, 23, 4, 6, 2, 2};
    list<int> list2 = {7, 6, 9, 1};

    // list1.sort();
    // list2.sort();

    // list1.merge(list2);
    // list2.splice(list1.begin(), list2);
    // list1 = list2;
    list1.unique();

    // for range based loop
    for (auto &elm : list1)
        cout << elm << " ";

    cout << endl ;

    // for range based loop
    for (auto &elm : list2)
        cout << elm << " ";

    return 0;
}