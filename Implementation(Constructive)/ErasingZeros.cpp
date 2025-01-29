#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int firstOne = -1, lastOne = -1, zeroCount = 0;

    // Find the first and last occurrence of '1'
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            if (firstOne == -1) firstOne = i;
            lastOne = i;
        }
    }

    // If there are no '1's, no need to remove any '0's
    if (firstOne == -1) {
        cout << "0\n";
        return;
    }

    // Count the number of '0's between firstOne and lastOne
    for (int i = firstOne; i <= lastOne; i++) {
        if (s[i] == '0') zeroCount++;
    }

    cout << zeroCount << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
