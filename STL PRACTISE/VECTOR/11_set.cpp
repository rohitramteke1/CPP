#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> Set{1,1,1,2,3,3,5,6,9,9,10,10};

    for (const auto &s: Set){
        cout << s << " " ;
    }
    
    return 0;
}