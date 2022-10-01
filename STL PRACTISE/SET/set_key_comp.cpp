#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    set<int>::value_compare comp = s.value_comp();
    // set<int>::value_compare comp = s.key_comp();
    // set<int>::iterator it;

    for (size_t i = 0; i <= 10; i++)
    {
        s.insert(i);
    }

    int a = *s.begin();
    // // set has the numbers
    // for(auto &it : s){
    //     cout << it << '\t';
    // }
    
    // initialising iterator it
    set<int>::iterator itr;
    itr = s.begin();

    cout << endl; 

    
    do
    {
        cout << *itr << '\t' ;
    } while (comp(*(++itr), a));
     
       
    return 0;
}