#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    int ct = 0;

    for (int i = 0; i < n; i++)
    {
        if (s.count(a[i] + 1))
        {
            ct++;
        }
    }

    cout << ct << endl;

    return 0;
}
