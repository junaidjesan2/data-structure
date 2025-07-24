#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {

        int n;
        cin >> n;
        if (n == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        if (n == 1)
        {
            if (!q.empty())
            {

                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }

        // cout << q.size() << endl;
    }
    return 0;
}