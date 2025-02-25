#include <bits/stdc++.h>

using namespace std;

bool check(vector<bool> &arr) {
    for (bool b: arr) {
        if (!b) return false;
    }
    return true;
}

bool can(vector<int> &table, vector<bool> &arr) {
    for (int &a: table) {
        if (!arr[a - 1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<int, vector<int> > table;
    for (int i = 1; i <= N; i++) {
        table[i] = vector<int>();
    }
    int before, after;
    for (int i = 0; i < M; i++) {
        cin >> before >> after;
        table[after].push_back(before);
    }

    // n - 1
    vector<bool> complete(N, false);

    // n - 1
    vector<int> end(N, 0);

    for (int i = 1; !check(complete); i++) {
        vector<int> rec;
        for (int j = 1; j <= N; j++) {
            if (!complete[j - 1] && can(table[j], complete)) {
                rec.push_back(j);
            }
        }
        for (int &a: rec) {
            end[a - 1] = i;
            complete[a - 1] = true;
        }
    }

    for (int &a : end) {
        cout << a << " ";
    }

    return 0;
}
