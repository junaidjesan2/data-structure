#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int flag = 0;

        while (l <= r)
        {
            int middle = (l + r) / 2;
            if (arr[middle] == x)
            {
                flag = 1;
                break;
            }
            else if (arr[middle] > x)
            {
                r = middle - 1;
            }
            else if (arr[middle] < x)
            {
                l = middle + 1;
            }
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}