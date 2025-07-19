#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int data)
    {
        l.push_back(data);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStack s;
    int n;
    cin >> n;
    while (n--)
    {
        int data;
        cin >> data;
        s.push(data);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}