#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_map<int, char> u_map = {{5, 'd'}};
    u_map.insert({1, 'a'});
    // u_map.insert({pair<int, char>(2, 'b')});
    // u_map.insert({make_pair(3, 'c')});

    // Access
    cout << u_map[1] << endl ;
    cout << u_map[5] << endl ;

    // Update
    u_map[1] = 'z';

    for (auto &elm : u_map)
    cout << elm.first << " " << elm.second << endl;

    auto result = u_map.find(5);

    if(result != u_map.end()){
        cout << "Result Found: " 
        << result->first << " " << result->second << endl;
    }
    else{
        cout << "Result not found: " << endl ;
    }
    
    // If we remove the unordered map and print the same code then we'll see that the output will be in sorted manner
    

    return 0;
}