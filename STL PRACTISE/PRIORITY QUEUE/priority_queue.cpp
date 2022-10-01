#include <iostream>
#include <queue>

using namespace std;

// Note: By default, C++ creates a max-heap for priority queue.
// How to create a min-heap for the priority queue? 
// C++ provides the below syntax for the same.  
// Syntax:
// priority_queue <int, vector<int>, greater<int>> g = gq;

void showpq(priority_queue<int, vector<int>, greater<int>> q){
    priority_queue<int, vector<int>, greater<int>> pq = q;

    while(!pq.empty())
    {
        cout << pq.top() << '\t';
        pq.pop();
    }
    cout << '\n';
}

int main()
{
    // Min-heap c++ syntax
    priority_queue <int, vector<int>, greater<int>> q;
    q.push(10);
    q.push(5);
    q.push(30);
    q.push(50);
    q.push(20);

    cout << "The priority Queue is: ";
    showpq(q);

    cout << "Queue.size(): " << q.size() << endl;
    cout << "Queue.top(): " << q.top() << endl ;
    cout << "Queue.pop(): ";
    q.pop();
    cout << '\n';
    
    cout << "The priority Queue is: ";
    showpq(q);
    

    return 0;
}