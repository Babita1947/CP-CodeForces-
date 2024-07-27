#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    
    for (int i = 0; i < x.size(); ++i) {
        int digit = x[i] - '0'; // Convert char to int
        int inverted = 9 - digit;
        
        if (inverted < digit) {
            // For the most significant digit, ensure we don't get a leading zero
            if (i == 0 && inverted == 0) {
                continue;
            }
            x[i] = inverted + '0'; // Convert int back to char
        }
    }

    cout << x << endl;
    
    return 0;
}
