#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(){
    
    map<int, int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});
    m.insert({4, 40});
    m.insert({5, 50});
    m.insert({6, 60});
    m.insert(pair<int, int>(7,70));
    m.insert(make_pair(8, 80));
    m.insert(make_pair<int, int>(9, 90));
    // m.insert({8, 80});

    map<int, int>::iterator itr;

    // loop to show the mapped data
    cout << "\nMap1 data: " << endl ;
    for(itr = m.begin(); itr !=m.end(); itr++)
        cout << itr->first << " " << itr->second << endl ;
    cout << endl;
          
    // Copy the remaining data
    map<int, int> map2(m.begin(), m.end());
    cout << "\nMap2 data: " << endl ;
    for(itr = map2.begin(); itr !=map2.end(); itr++)
        cout << itr->first << " " << itr->second << endl ;
    
    // remove upto specific element using find() -> find() takes key as argumnet
    map2.erase(map2.begin(), map2.find(4));
    cout << "\nMap2 data after removing the upto map2.find(30): " << endl ;
    for(itr = map2.begin(); itr !=map2.end(); itr++)
        cout << itr->first << " " << itr->second << endl ;
    
    int num;
    num = map2.erase(5);
    cout << "\nMap.erase(5): " << num << " removed \n";
    for(itr = map2.begin(); itr !=map2.end(); itr++)
        cout << itr->first << " " << itr->second << endl ;
    
    // lower_bound(), upper_bound()
    cout << "map2.lower_bound(6) : " << map2.lower_bound(6)->first << "\t\t map2.lower_bound(6)->second : " << map2.lower_bound(6)->second << endl ;
    cout << "map2.upper_bound(6) : " << map2.upper_bound(6)->first << "\t\t map2.upper_bound(6)->second : " << map2.upper_bound(6)->second << endl ;
    

    return 0;
}