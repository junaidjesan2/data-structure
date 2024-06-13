#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool isDuplicate = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                isDuplicate = true;
            }
        }
    }
    if (isDuplicate == true)
    {
        cout << "YES";
    }
    else if (isDuplicate == false)
    {
        cout << "NO";
    }

    return 0;
}