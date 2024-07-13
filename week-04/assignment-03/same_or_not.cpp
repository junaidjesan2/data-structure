#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    stack<int> myStack;
    queue<int> myQueue;

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            myStack.push(v);
        }
        for (int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            myQueue.push(v);
        }

        while (!myQueue.empty() && !myStack.empty())
        {
            int val1 = myQueue.front();
            int val2 = myStack.top();
            if (val1 != val2)
            {
                cout << "NO";
                return 0;
            }
            myQueue.pop();
            myStack.pop();
        }
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }

    return 0;
}