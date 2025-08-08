#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        string word;
        map<string, int> freq;
        string maxWord = "";
        int maxCount = 0;

        while (ss >> word)
        {
            freq[word]++;
            int currentCount = freq[word];

            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                maxWord = word;
            }
        }

        if (maxWord.empty())
        {
            cout << "Empty" << endl;
        }
        else
        {
            cout << maxWord << " " << maxCount << endl;
        }
    }

    return 0;
}