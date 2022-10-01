#include <iostream>
#include <array>

using namespace std;

int main(){
    // Declare
    // std::array<int, 5> arr;

    // Initialization
    // std::array<int, 5> arr = {1, 2, 3, 4, 5}; // Initializer list
    std::array<int, 5> arr {1, 2, 3, 4, 5}; // uniform initialization

    // Array Methods: 
    // array_name.at()
    // array_name[]
    // array_name.front()
    // array_name.rear()
    // array_name.data() <- Gives the Address of first element

    cout << arr.at(2) << endl ;
    cout << arr[2] << endl ;
    cout << arr.front() << endl ;
    cout << arr.back() << endl ;

    cout << arr.data() << endl ;
    cout << &arr << endl ;

    cout << arr.empty() << endl ;


    return 0;
}
