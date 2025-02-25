#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        // N <= M
        int N, M;
        cin >> N >> M;
        vector<vector<int> > c(M + 1, vector<int>(N + 1, 0));

        for (int i = 0; i <= M; i++) {
            c[i][0] = 1;
        }

        for (int i = 1; i <= N; i++) {
            c[i][i] = 1;
        }

        for (int i = 2; i < M; i++) {
            for (int j = 1; (j <= N) && (j < i); j++) {
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            }
        }

        cout << c[M - 1][N - 1] + c[M - 1][N] << '\n';
    }

    return 0;
}
