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
    vector <int> v2 {5, 10};
    vector <int> v3 = {1, 2, 3, 4, 5}; // Initialiser list
    vector <int> v4 {1, 2, 3, 4, 5}; // Uniform initialisation


    // cout << "Hello world\n" ;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    cout << v.at(0) << endl ;
    cout << v[1] << endl ;
    cout << v[25] << endl ;


    cout << v[0] << endl ;
    cout << v.at(0) << endl ;
    cout << v.front() << endl ;
    cout << v.back() << endl ;

    // data vs normal address
    cout << v.data() << endl ;
    cout << &v[0] << endl ;
    cout << v.size() << endl ;

    
    
    return 0;
}