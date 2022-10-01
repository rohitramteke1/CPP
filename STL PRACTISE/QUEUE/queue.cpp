// Queue is Container 
#include <iostream>
#include <queue>

using namespace std;

void showQ(queue<int> q){

    queue<int> lq = q;
    // q.empty() -> returns zero if it's not empty
    while(!lq.empty())
    {
        cout << '\t' << lq.front();
        lq.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    cout << "The Queue is : " << endl ;
    showQ(q);

    cout << "Queue.empty(): " << q.empty() << endl ;
    cout << "Queue.size(): " << q.size() << endl ;
    cout << "Queue.front(): " << q.front() << endl ;
    cout << "Queue.back(): " << q.back() << endl ;
    // cout << "Queue.pop(): " << q.pop() << endl ;
    

    return 0;
}