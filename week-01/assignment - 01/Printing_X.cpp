#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (0 < n <= 20 && n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j && i == n / 2)
                {
                    cout << 'X';
                }
                else if (i == j)
                {
                    cout << '\\';
                }
                else if (j == n - i - 1)
                {
                    cout << '/';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }

    return 0;
}