#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    int queries[q];
    for (int j = 0; j < q; j++)
    {
        cin>>queries[j];

        int l = 0;
        int r = n - 1;
        int mid_point = (l + r) / 2;
        bool result = false;
        if (mid_point == queries[j])
        {
            result = true;
        }

        if (mid_point > queries[j])
        {
            l = mid_point + 1;
        }
        else
        {
            r = mid_point - 1;
        }

        if (result == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}