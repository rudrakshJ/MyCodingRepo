#include<iostream>
#include<queue>
using namespace std;

void print(queue < int > q) 
{
    queue < int > q1 = q;
    while (!q1.empty()) 
    {
    cout << q1.front() << " ";
    q1.pop();
    }
    cout << "\n";
}

void revQueue(queue < int > &q) //Very imp, to reverse in place, we need to pass a reference
{
    if (!(q.empty()))
    {
        int var = q.front();
        q.pop();
        revQueue(q);
        q.push(var);
    }
    else
    {
        return;
    }
    
}


int main() {
    queue < int > q;
    for (int i = 0; i < 5; i++) {
        q.push(i + 1);
    }
    cout << "The elements of queue are ";
    print(q);

    revQueue(q);
    print(q);

    
    return 0;
}