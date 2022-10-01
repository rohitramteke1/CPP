#include <iostream>
#include <map>
#include <functional>
#include <vector>

using namespace std;

int main()
{
    // map <string, int> Map; // deafult ascending
    map <string, vector<int>> Map; // deafult ascending

    Map["Rohit"].push_back(2041054);
    Map["Rohit"].push_back(19);
    Map["Rohit"].push_back(64);

    Map["Ritik"].push_back(2041053);
    Map["Ritik"].push_back(20);
    Map["Ritik"].push_back(63);

    // map <string, int, less<>> Map; // -> for ascending order
    // map <string, int, greater<>> Map; // -> for descending order

    // map <string, int, std::less<string>> Map; // -> for ascending order
    // map <string, int, std::greater<string>> Map; // -> for descending order

    // // First Way
    // Map["Rohit"] = 2041054;
    // Map["Ritik"] = 2041053;
    // Map["Yash"] = 2041052;

    // // Second Way
    // Map.insert(make_pair("Rohit_Ramteke", 2041054));
    // Map.insert(make_pair("Ritik-Mandal", 2041053));
    // Map.insert(make_pair("Yash_Raut", 2041052));

    // for range based loop
    // loop through map

    for (auto &elm : Map)
    {
        cout << elm.first << '\n';
        for (auto &element : elm.second){
            cout << element << " ";
        }
        cout << endl ;
    }

    // // Access using []
    // cout << "Rohit_Ramteke: " << Map["Rohit_Ramteke"] << endl ;

    return 0;
}