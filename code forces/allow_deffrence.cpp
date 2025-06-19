#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int min = *min_element(arr, arr + n);
        int max = *max_element(arr, arr + n);
        if (max - min > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}