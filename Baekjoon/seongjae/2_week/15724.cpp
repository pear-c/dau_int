#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int sizeX, sizeY;
    cin >> sizeX >> sizeY;
    vector arr(sizeX + 1, vector<int>(sizeY + 1, 0));

    for (int i = 1; i <= sizeX; i++) {
        for (int j = 1; j <= sizeY; j++) {
            cin >> arr[i][j];
        }
    }

    int t = sizeX < sizeY ? sizeX : sizeY;

    for (int k = 1; k <= t; k++) {
        for (int i = k; i <= sizeY; i++) {
            arr[k][i] += (arr[k - 1][i] + arr[k][i - 1]) - arr[k - 1][i - 1];
        }
        for (int i = k + 1; i <= sizeX; i++) {
            arr[i][k] += (arr[i][k - 1] + arr[i - 1][k]) - arr[i - 1][k - 1];
        }
    }

    int tc;
    int x1, y1, x2, y2;
    int calc = 0;
    cin >> tc;
    while (tc--) {
        cin >> x1 >> y1 >> x2 >> y2;
        calc = arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1];
        cout << calc << '\n';
    }

    return 0;
}
