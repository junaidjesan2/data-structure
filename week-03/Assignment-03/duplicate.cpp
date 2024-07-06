#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> findDuplicateList;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        findDuplicateList.push_back(v);
    }
    findDuplicateList.sort();
    findDuplicateList.unique();
    for (auto i = findDuplicateList.begin(); i != findDuplicateList.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}