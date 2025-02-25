#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    vector<int> conn;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K, X;
    cin >> N >> M >> K >> X;
    vector<Node> nodes(N);
    int to, from;
    for (int i = 0; i < M; i++) {
        cin >> to >> from;
        nodes[to - 1].conn.push_back(from - 1); // 방향 그래프 처리
    }

    vector<int> visited(N, -1); // 방문 여부 및 거리 초기화
    queue<int> bfs;
    X--;
    visited[X] = 0;
    bfs.push(X);

    for (int i = 1; i <= K; i++) {
        int size = bfs.size();
        for (int j = 0; j < size; j++) {
            int front = bfs.front();
            bfs.pop();
            for (int &a : nodes[front].conn) {
                if (visited[a] == -1) {
                    bfs.push(a);
                    visited[a] = i;
                }
            }
        }
    }

    bool check = false;
    for (int i = 0; i < N; i++) {
        if (visited[i] == K) {
            check = true;
            cout << i + 1 << '\n';
        }
    }
    if (!check) cout << -1 << '\n';

    return 0;
}
