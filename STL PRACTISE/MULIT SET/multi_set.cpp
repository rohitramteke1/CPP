#include <iostream>
#include <set>

using namespace std;
int main()
{
    multiset<int, greater<int>> mset;

    mset.insert(1);
    mset.insert(5);
    mset.insert(10);
    mset.insert(15);
    mset.insert(20);
    mset.insert(25);
    mset.insert(30);
    mset.insert(35);

    // 50 will be added again to the multiset unlike set
    mset.insert(50);
    mset.insert(10);

    multiset<int, greater<int>>::iterator itr;
    for(itr = mset.begin() ; itr != mset.end(); itr++)
    {
        cout << *itr << '\t';
    }
    cout << '\n';
    
    multiset<int> mset2(mset.begin(), mset.end());
    for(itr = mset2.begin(); itr!= mset2.end(); itr++)
    {
        cout << *itr << '\t';
    }
    // remove the element upto 25
    mset2.erase(mset2.begin(), mset2.find(25));
    cout << "\nRemove the elements upto 25:  ";
    for(itr = mset2.begin(); itr!= mset2.end(); itr++)
        cout << '\t' << *itr ;

    cout << endl;
    // lower_bound(), upper_bound() ->returns the iterator

    cout << "mset.lower_bound(): " << *mset.lower_bound(30) << endl;
    cout << "mset.lower_bound(): " << *mset.upper_bound(30) << endl;
    cout << "mset2.lower_bound(): " << *mset2.lower_bound(30) << endl;
    cout << "mset2.lower_bound(): " << *mset2.upper_bound(30) << endl;
    
    
    return 0;
}