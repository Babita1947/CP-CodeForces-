#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5], row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // cout<<"Enter a number: ";
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i; 
                col = j;
            }
        }
    }

    cout << abs(row - 2) + abs(col - 2) << endl;

    return 0;
}
