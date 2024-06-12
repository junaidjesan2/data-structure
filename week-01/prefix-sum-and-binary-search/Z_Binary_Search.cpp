#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    while (q--)
    {

        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        bool res = false;
        while (l <= r)
        {
            int pre = (l + r) / 2;
            if (a[pre] == x)
            {
                res = true;
                break;
            }

            if (x > a[pre])
            {
                l = pre + 1;
            }
            else
            {
                r = pre - 1;
            }
        }
        if (res == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}