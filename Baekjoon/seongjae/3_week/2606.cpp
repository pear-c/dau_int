#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int index;

    Node(int index) {
        this->index = index;
    }

    vector<int> conn;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 노드 수
    int n = 0;
    cin >> n;

    vector<Node> nodes;
    for (int i = 0; i < n; i++) {
        nodes.push_back(Node(i));
    }

    int network = 0;
    cin >> network;

    while (network--) {
        int to, from;
        cin >> to >> from;
        nodes[to - 1].conn.push_back(from - 1);
        nodes[from - 1].conn.push_back(to - 1);
    }

    vector<bool> visited(n, false);
    queue<int> bfs;
    // 시작점
    bfs.push(0);
    visited[0] = true;

    int output = 0;
    while(!bfs.empty()) {
        int target = bfs.front();
        bfs.pop();

        for (auto &conn : nodes[target].conn) {
            // 아직 방문하지 않았을 경우
            if (!visited[conn]) {
                output++;
                bfs.push(conn);
                visited[conn] = true;
            }
        }
    }

    cout << output;

    return 0;
}
