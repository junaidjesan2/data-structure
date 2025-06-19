#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    set<int> digits;
    while (year > 0) {
        int d = year % 10;
        if (digits.count(d)) return false;
        digits.insert(d);
        year /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }
    return 0;
}
