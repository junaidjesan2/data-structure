#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> arr(n);
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    a[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}