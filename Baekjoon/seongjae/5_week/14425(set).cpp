#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    set<string> S;
    string input;
    for (int i = 0; i < N; i++) {
        cin >> input;
        S.insert(input);
    }

    int sum = 0;
    for (int i = 0; i < M; i++) {
        cin >> input;
        if (S.find(input) != S.end()) {
            sum++;
        }
    }

    cout << sum;

    return 0;
}
