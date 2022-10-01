#include <iostream>
#include <vector>
using namespace std;

// ELEMENT ACCESS: 
// at(), [], front(), back(), data()

// MODIFIERS: 
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

int main()
{
    vector <int> v;
    // v.reserve(10);

    for (int i = 0; i < 32; ++i)
    {
        v.push_back(i);
        cout << "Size: " << v.size() << "    Capacity: " << v.capacity() << endl ;
    }
    
    return 0;
}