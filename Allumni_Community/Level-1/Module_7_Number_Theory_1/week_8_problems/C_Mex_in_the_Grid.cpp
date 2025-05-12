#include <iostream>
#include <vector>
using namespace std;

void magical_spiral(int n) {
    vector<vector<int>> arr(n, vector<int>(n, -1));

    // Start position
    int x, y;
    if (n % 2 == 0) {
        x = n / 2 - 1;
        y = n / 2 - 1;
    } else {
        x = n / 2;
        y = n / 2;
    }

    arr[x][y] = 0;
    int value = 1;
    int step = 1;
    
    // Directions: right, down, left, up
    int dir[4][2] = {
        {0, 1},   // right
        {1, 0},   // down
        {0, -1},  // left
        {-1, 0}   // up
    };

    while (value < n * n) {
        for (int d = 0; d < 4; ++d) {
            int steps = step;
            if (d % 2 == 1) step++; // Increase step after vertical move

            int dx = dir[d][0];
            int dy = dir[d][1];

            for (int i = 0; i < steps; ++i) {
                x += dx;
                y += dy;

                if (x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == -1) {
                    arr[x][y] = value++;
                }
                if (value >= n * n) break;
            }

            if (value >= n * n) break;
        }
    }

    // Print the spiral matrix
    for (const auto& row : arr) {
        for (int num : row) {
            cout << num << "\t";
        }
        cout << '\n';
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        magical_spiral(n);
    }

    return 0;
}