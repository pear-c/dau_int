#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (auto &a: arr) {
        cin >> a;
        sum += a;
    }

    long long output = 0;
    for (int i = 0; i < n - 1; i++) {
        sum -= arr[i];
        output += sum * arr[i];
    }

    cout << output;

    return 0;
}
