#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    vector<int> adj;
    int p;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<Node> Tree(N + 1);

    // 인접 노드 초기화
    int v1, v2;
    for (int i = 0; i < N - 1; i++) {
        cin >> v1 >> v2;
        Tree[v1].adj.push_back(v2);
        Tree[v2].adj.push_back(v1);
    }

    // 방문 체크용
    vector<bool> visited(N + 1, false);
    queue<int> bfs;
    
    // bfs로 부모 찾아주기
    bfs.push(1); // 루트
    while (!bfs.empty()) {
        int p = bfs.front();
        bfs.pop();
        visited[p] = true;
        for (int adj: Tree[p].adj) {
            // 방문 안했으면
            if (!visited[adj]) {
                // 부모 찾아줌
                Tree[adj].p = p;
                bfs.push(adj);
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        cout << Tree[i].p << '\n';
    }
}
