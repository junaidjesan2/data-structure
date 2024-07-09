#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;
    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int v1;
        cin >> v1;
        q1.push(v1);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int v2;
        cin >> v2;
        q2.push(v2);
    }
    if (n1 == n2)
    {
        for (int i = 0; i < n1; i++)
        {
            int val1 = q1.front();
            int val2 = q2.front();
            if (val1 != val2)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                cout << "YES";
                return 0;
            }
            q1.pop();
            q2.pop();
        }
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }

    return 0;
}