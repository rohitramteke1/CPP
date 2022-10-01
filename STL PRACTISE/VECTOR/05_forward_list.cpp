#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> list1 = {1, 2, 2, 4, 3, 5, 3, 4, 5, 6, 7};
    forward_list<int> list2 = {14, 15, 16, 17, 18, 19, 20};

    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    
    // list1.insert_after(list1.begin(), 100);
    // list1.reverse();
    // list1.merge(list2); _> sorted list requires | work on unsorted also but sorted is re 

    // // for range based loop
    // for(auto &elm : list1){
    //     cout << elm << endl;
    // }

    // cout << "Size of list2: " << distance(list2.begin(), list2.end()) << endl ;
    // list1.splice_after(list1.begin(), list2);

    list1.sort();
    // Removes the adjacent duplicate
    list1.unique();

    // // Removes the given entry
    // list1.remove(2);

    // // removes the specific element from list1 -=> using lambda function
    // list1.remove_if([] (int n) {
    //     return n > 3;
    // });
    
    // List_>resize
    // list1.resize(2); // removes the remaining elements from list
    // list1.resize(9); // add the 0 in list
    
    
    // for range based loop
    for(auto& elm : list1){
        cout << elm << endl;
    }    


    
    return 0;
}