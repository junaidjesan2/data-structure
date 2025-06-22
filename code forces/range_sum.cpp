#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long int> arr(n);
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    a[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        a[i] = arr[i] + a[i - 1];
    }

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 1)
            cout << a[r - 1] << endl;
        else
            cout << a[r - 1] - a[l - 2] << endl;
    }
    return 0;
}