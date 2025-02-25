#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> arr(N);
    for (int &a: arr) {
        cin >> a;
    }
    int x;
    cin >> x;

    double sum = 0, count = 0;
    for (int &a: arr) {
        if (gcd(a, x) == 1) {
            sum += a;
            count++;
        }
    }

    cout << sum / count;

    return 0;
}
