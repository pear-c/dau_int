#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n; // 명령 횟수
    cin >> n;
    stack<int> stack; // 스택

    string comm; // 명령어 변수
    int pushNum = 0; // push 정수

    for (int i = 0; i < n; i++) {
        cin >> comm; // 명령어
        if (comm == "pop") { // pop
            if (stack.empty()) {
                cout << -1 << endl;
            } else {
                cout << stack.top() << endl;
                stack.pop();
            }
        } else if (comm == "size") { // size
            cout << stack.size() << endl;
        } else if (comm == "empty") { // empty
            cout << stack.empty() << endl;
        } else if (comm == "top") { // top
            if (stack.empty()) {
                cout << -1 << endl;
            } else cout << stack.top() << endl;
        } else { // push
            cin >> pushNum; // 정수 X 읽기
            stack.push(pushNum);
        }
    }
}
