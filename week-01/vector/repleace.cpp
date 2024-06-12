#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // vector<int> v = {4, 2, 4, 3};
    replace(a.begin(), a.end(), 53, 10);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    
    return 0;
}