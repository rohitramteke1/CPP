#include <iostream>
#include <vector>

using namespace std;

// Syntax:
// for ( range_declaration : range_expression ) 
//     loop_statement
// Parameters :
// range_declaration : 
// a declaration of a named variable, whose type is the 
// type of the element of the sequence represented by 
// range_expression, or a reference to that type.
// Often uses the auto specifier for automatic type 
// deduction.

// range_expression : 
// any expression that represents a suitable sequence 
// or a braced-init-list.

// loop_statement : 
// any statement, typically a compound statement, which
// is the body of the loop.


int main(){
    vector<int> v{0,1,2,3,4,5,6};
    int arr[] = {0,1,2,3,4,5,6};

    // Range based for loop
    for (auto i: v){
        cout << i << endl ;
    }


    return 0;
}