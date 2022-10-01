#include <iostream>
#include <queue>

using namespace std;

void showQ(queue<char> q){

    queue<char> q1 = q;
    while(!q1.empty())
    {
        cout << q1.front() << endl;
        q1.pop();
    }
    cout << endl ;
}

int main()
{
    queue<char> q1, q2;

    int n = 96;
    for (int i = 1; i < 6; i++)
    {
        q1.push(n + 1);
        n++;
    }
    
    for (int i = 1; i < 5; i++)
    {
        q2.push(n + 1);
        n++;
    }

    q1.swap(q2);
    cout << "\nQueue: " ;
    while(!q1.empty())
    {
        cout << q1.front() << ' ';
        q1.pop();
    }

    cout << "\nQueue: " ;
    while(!q2.empty())
    {
        cout << q2.front() << ' ';
        q2.pop();
    }
    
    return 0;
}