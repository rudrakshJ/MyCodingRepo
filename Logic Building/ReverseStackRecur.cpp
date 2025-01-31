#include <bits\stdc++.h>
using namespace std;

#define MAX 100

int flag = 0;
//flag = 0 if normal condition
// flag = 1 if underflow
// flag = 2 if overflow

void dispStk(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

void pushStk(vector<int> &v, int n)
{
    if (v.size() < MAX)
    {
        flag = 0;
        v.push_back(n);
    }
    else
    {
        flag = 2;
    }    
}

int popStk(vector<int> &v)
{
    if (v.size() == 0)
    {
        flag = 1;        
    }
    else
    {
        flag = 0;
        int popped = v.back();
        v.pop_back();
        return popped;
    }    
}

int revStk(vector<int> &v, vector<int> &r)
{
    if (flag == 1)
    {
        cout << "Reversed succesfully" << " : ";
        v = r;
        flag = 0;
        return 0;
    }
    int num = popStk(v);
    if (flag == 0)
    {
        pushStk(r, num);
    }
    

    revStk(v , r);
}

int main()
{
    vector<int> stk1;
    pushStk(stk1, 1);
    pushStk(stk1, 2);
    pushStk(stk1, 3);
    pushStk(stk1, 4);

    cout << "Original Stack : ";
    dispStk(stk1);

    vector<int> rev1;// Stack to store reversed stack

    revStk(stk1, rev1);

    dispStk(stk1);


}
