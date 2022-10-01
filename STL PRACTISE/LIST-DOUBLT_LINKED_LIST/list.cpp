#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main(){
    list<int> my_list{10, 20, 30, 40, 50};

    // my_list.push_back(5);
    // my_list.emplace_back(50);

    cout << "Size of list " << my_list.size() << endl ;
    cout << "Max size of list " << my_list.max_size() << endl ;
    cout << "list.front(): " << my_list.front() << endl ;
    cout << "list.back(): " << my_list.back() << endl ;

    list<int>::iterator it;
    it = my_list.begin();
    cout << "first item using front iterator: " << *it << endl ;


    list<int>::reverse_iterator rit;
    rit = my_list.rend();
    rit++;  
    rit++;
    cout << "last item using front reverse_iterator: " << *(rit) << endl ;

    rit = my_list.rbegin();
    cout << "last item using front reverse_iterator: " << *rit << endl ;
    // my_list.clear();

    for(auto &elm : my_list){
        cout << elm << " ";
    }
    cout << endl;
    
    for(auto it = my_list.rbegin(); it != my_list.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    for(auto it = my_list.rend(); it != my_list.rbegin(); it++){
        cout << *it << " ";
    }
    
    
    return 0;
}