#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    int t;
    cin >> t;
    arr.insert(arr.begin() + t, brr.begin(), brr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}