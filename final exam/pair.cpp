#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string name;
    int roll;

    Students(string n, int r)
    {
        name = n;
        roll = r;
    }
};
class ccf
{
public:
    bool operator()(const Students &a, const Students &b)
    {
        if (a.name == b.name)
            return a.roll < b.roll;
        return a.name > b.name;
    }
};
int main()
{
    priority_queue<Students, vector<Students>, ccf> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int roll;
        string name;
        cin >> name >> roll;
        Students s(name, roll);
        pq.push(s);
    }
    while (!pq.empty())
    {
        Students s = pq.top();
        cout << s.name << " " << s.roll << endl;
        pq.pop();
    }
    return 0;
}