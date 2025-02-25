#include <bits/stdc++.h>

using namespace std;

int check(char s, string t, int index) {
    for (int i = index; i < t.length(); i++) {
        if (t[i] == s) return i + 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;

    cin >> s >> t;

    while(!cin.eof()) {
        int index = 0;
        bool can = true;
        for (int i = 0; i < s.length(); i++) {
            index = check(s[i], t, index);
            if (index < 0) {
                can = false;
                break;
            }
        }

        if (can) cout << "Yes" << '\n';
        else cout << "No" << '\n';

        cin >> s >> t;
    }

    return 0;
}
