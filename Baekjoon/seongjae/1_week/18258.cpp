#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    int tc;
    cin >> tc;

    while (tc--) {
        string cmd;
        int num;
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            q.push(num);
        } else if (cmd == "pop") {
            if (q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if (cmd == "size") {
            cout << q.size() << '\n';
        } else if (cmd == "empty") {
            cout << q.empty() << '\n';
        } else if (cmd == "front") {
            if (q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
            }
        } else {
            if (q.empty()) cout << -1 << '\n';
            else {
                cout << q.back() << '\n';
            }
        }
    }
}
