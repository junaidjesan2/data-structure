#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}