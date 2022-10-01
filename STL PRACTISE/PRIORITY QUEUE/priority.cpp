#include <iostream>
#include <queue>

using namespace std;

void show(priority_queue<int> q){
    priority_queue<int> pq = q;

    while(!pq.empty())
    {
        cout << pq.top() << '\t';
        pq.pop();
    }
    cout << '\n';
}

int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(5);
    q.push(30);
    q.push(50);
    q.push(20);

    cout << "The priority Queue is: ";
    show(q);

    cout << "Queue.size(): " << q.size() << endl;
    cout << "Queue.top(): " << q.top() << endl ;
    cout << "Queue.pop(): ";
    q.pop();
    cout << '\n';
    
    cout << "The priority Queue is: ";
    show(q);
    

    return 0;
}