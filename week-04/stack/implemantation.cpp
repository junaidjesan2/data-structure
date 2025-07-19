#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    void pop(int x)
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        return false;
    }
};
int main()
{
    myStack s;
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        s.push(v);
    }
    // cout << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop(s.top());
    }
    return 0;
}