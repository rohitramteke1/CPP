#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> // accumulate

using namespace std;

int main(){
    vector<int> v{5,6,9,3,1,4,0} ;
    
    vector<int>::iterator iter;
    // Bidirectional
    // iter = v.begin()+2;
    // cout << *(iter-2) << endl ;

    // iter = v.begin();
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *(iter) << ' ' ;
    }
    cout << '\n' << *max_element(v.begin(), v.end());
    cout << '\n' << *min_element(v.begin(), v.end());
    cout << '\n' << accumulate(v.begin(), v.end(), 0); 
        
    return 0;
}