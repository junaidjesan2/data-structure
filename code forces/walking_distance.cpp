#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long sum_per_cycle = a + b + c;

        long long num_full_cycles = n / sum_per_cycle;

        long long remaining = n - num_full_cycles * sum_per_cycle;

        if (remaining == 0)
        {
            cout << num_full_cycles * 3 << endl;
        }
        else
        {
            vector<long long> distances = {a, b, c};
            long long current_day = num_full_cycles * 3;

            for (int i = 0; i < 3; ++i)
            {
                current_day++;
                remaining -= distances[i];
                if (remaining <= 0)
                {
                    cout << current_day << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
