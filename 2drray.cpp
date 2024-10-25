#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;

    vector<vector<int>> arr(n, vector<int>(n));

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Check if the array elements satisfy the progressive square rules
    bool valid = true;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if ((arr[i][j] + c != arr[i + 1][j] || arr[i][j] != arr[i][j + 1]) &&
                (arr[i][j] + d != arr[i][j + 1] || arr[i][j] != arr[i + 1][j])) {
                valid = false;
                break;
            }
        }
        if (!valid) break;
    }

    // Output the result
    if (valid) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

 
