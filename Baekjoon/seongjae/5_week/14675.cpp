#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> nodes(N);
    int from, to;

    // 그래프 입력
    for (int i = 0; i < N - 1; i++) {
        cin >> from >> to;
        nodes[from - 1].push_back(to);
        nodes[to - 1].push_back(from);
    }

    int q;
    cin >> q;

    while (q--) {
        int t, num;
        cin >> t >> num;

        if (t == 1) {
            if (nodes[num - 1].size() >= 2) {
                cout << "yes\n";
            } else {
                cout << "no\n";
            }
        } else {
            cout << "yes\n";
        }
    }

    return 0;
}
