#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[n];
    }

    bool sorted = true;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < a[i-1])
        {
            cout<<a[i]<<" "<<a[i-1]<<endl;
            sorted = false;
            break;
        }
    }
    if (sorted == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}