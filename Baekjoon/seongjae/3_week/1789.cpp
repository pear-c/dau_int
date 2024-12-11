#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long num, count = 0;
    cin >> num;

    for (int i = 1; ; i++) {
        if (num - i >= 0) {
            count ++;
            num -= i;
        } else {
            break;
        }
    }

    cout << count;

    return 0;
}
