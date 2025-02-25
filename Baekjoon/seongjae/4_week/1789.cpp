#include <bits/stdc++.h>

using namespace std;

// 중복체크 함수
bool find(string output, char num) {
    for (auto a : output) {
        if (a == num) return true;
    }
    return false;
}

// dfs로 만들 수 있는 조합 찾기
void dfs(int N, int M, string output) {
    if (M == 0) {
        for (auto a : output) {
            cout << a << " ";
        }
        cout << '\n';
    }
    else {
        for (int i = 1; i <= N; i++) {
            char num = i + '0';
            // 중복체크
            if (!find(output, num)) {
                dfs(N, M - 1, output + num);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    string output = "";

    dfs(N, M, output);

    return 0;
}
