#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> ss;
    int N, M;
    cin >> N >> M;
    string input;
    
    for (int i = 1; i <= N; i++) {
        cin >> input;
        ss[input] = to_string(i);
        ss[to_string(i)] = input;
    }

    for (int i = 0; i < M; i++) {
        cin >> input;
        cout << ss[input] << '\n';
    }
}
