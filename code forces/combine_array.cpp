#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }

    for (int x : c)
    {
        cout << x << " ";
    }

    return 0;
}