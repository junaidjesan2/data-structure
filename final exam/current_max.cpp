#include <bits/stdc++.h>
using namespace std;

class Numbers
{
public:
    int number;

    Numbers(int n)
    {
        number = n;
    }
};

class Compare
{
public:
    bool operator()(const Numbers &a, const Numbers &b)
    {
        if (a.number != b.number)
        {
            return a.number > b.number;
        }
        return a.number < b.number;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Numbers, vector<Numbers>, Compare> pq;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        pq.push(Numbers(number));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            int number;
            cin >> number;
            pq.push(Numbers(number));

            Numbers s = pq.top();
            cout << s.number << endl;
        }
        else if (command == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Numbers s = pq.top();
                cout << s.number << endl;
            }
        }
        else if (command == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();

                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Numbers s = pq.top();
                    cout << s.number << endl;
                }
            }
        }
    }

    return 0;
}