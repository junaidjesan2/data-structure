#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - 1 - i]);
    }
    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}