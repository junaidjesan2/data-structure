#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool solved[26] = {false};
        int total_balloons = 0;

        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'A';  
            if (!solved[idx]) {
                total_balloons += 2;  
                solved[idx] = true;
            } else {
                total_balloons += 1;
            }
        }

        cout << total_balloons << endl;
    }

    return 0;
}
