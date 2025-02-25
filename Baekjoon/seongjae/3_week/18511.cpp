#include <bits/stdc++.h>

using namespace std;

void recursive(int &target, int num, int &output, vector<int> &K) {
    if (target >= num) {
        output = output < num ? num : output;

        for (auto &k : K) {
            recursive(target, num * 10 + k, output, K);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int target;
    cin >> target;
    // K의 원소 갯수
    int n;
    cin >> n;
    vector<int> K(n);
    for (auto &k: K) {
        cin >> k;
    }
    int output = 0;

    for (auto &k : K) {
        recursive(target, k, output, K);
    }

    cout << output;

    return 0;
}
