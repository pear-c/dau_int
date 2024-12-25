#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int> > input(N);
    int to, from;
    for (int i = 0; i < M; i++) {
        cin >> to >> from;
        input[to - 1].push_back(from - 1);
    }

    // 초기화
    // first = 진입 수
    // second = 진출 수
    vector<int> conn(N, 0);
    for (int i = 0; i < N; i++) {
        for (int &a: input[i]) {
            conn[a]++;
        }
    }

    queue<int> q;
    vector<int> output(N, 0);

    // 큐 초기화
    for (int i = 0; i < N; i++) {
        if (conn[i] == 0) {
            // 방문 체크
            q.push(i);
        }
    }
    int rec = 1;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int front = q.front();
            q.pop();
            output[front] = rec;
            for (int &a: input[front]) {
                conn[a]--;
                if (conn[a] == 0) {
                    q.push(a);
                }
            }
        }
        rec++;
    }

    for (int &a: output) {
        cout << a << " ";
    }

    return 0;
}
