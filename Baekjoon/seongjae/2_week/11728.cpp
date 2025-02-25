#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);

    for (int &a: A) cin >> a;
    for (int &b: B) cin >> b;

    vector<int> output;
    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] < B[j]) {
            output.push_back(A[i]);
            i++;
        } else {
            output.push_back(B[j]);
            j++;
        }
    }

    while (i < N) {
        output.push_back(A[i]);
        i++;
    }
    while (j < M) {
        output.push_back(B[j]);
        j++;
    }

    for (int &o: output) cout << o << " ";

    return 0;
}
