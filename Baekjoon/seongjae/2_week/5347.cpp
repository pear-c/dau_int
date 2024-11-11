#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (a == 0) return b;
    return GCD(b % a, a);
}

long LCM(int a, int b) {
    long output = a / GCD(a, b);
    return output * (long)b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int a, b;
        cin >> a >> b;
        cout << LCM(a, b) << '\n';
    }
}
