#include <iostream>
#include <stack>

using namespace std;
// empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// size() – Returns the size of the stack – Time Complexity : O(1) 
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// pop() – Deletes the top most element of the stack – Time Complexity : O(1) 


int main()
{
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);

    while (!stk.empty())
    {
        cout << stk.top() << '\t' ;
        stk.pop();
    }
    
    return 0;
}