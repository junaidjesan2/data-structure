#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    queue<int> copy;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while (!q.empty())
    {
        copy.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << copy.front() << " ";
        copy.pop();
    }

    return 0;
}