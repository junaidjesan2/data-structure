#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        int l, r, res = 0;
        cin >> l >> r;

        for (int i = l - 1; i < r; i++)
        {
            res += arr[i];
        }
        cout << res << endl;
    }
    return 0;
}