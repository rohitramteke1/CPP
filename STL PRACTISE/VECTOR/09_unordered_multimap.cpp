#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_multimap<int, char> element = {
        {5, 'd'}};
    element.insert({1, 'a'});
    element.insert({pair<int, char>(2, 'b')});
    element.insert({make_pair(3, 'c')});

    for (auto &elm : element)
    cout << elm.first << " " << elm.second << endl;

    return 0;
}