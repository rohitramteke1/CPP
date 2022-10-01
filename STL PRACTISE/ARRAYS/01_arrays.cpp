#include <iostream>
#include <array>
#include <tuple> // using get() from the tuple class

using namespace std;
int main()
{
    array<int, 6> A{1, 2, 3, 4, 5};
    cout << A[0] << endl ;
    cout << A.at(1) << endl ;
    cout << A.front() << endl ;
    cout << A.back() << endl ;
    
    return 0;
}