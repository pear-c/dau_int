#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int money = 0;
    cin >> money;

    int sum = 0;

    sum += money / 5;
    money %= 5;

    if ((money % 2 == 1) && (sum > 0)) {
        sum --;
        money += 5;
    }
    sum += money / 2;
    money %= 2;

    if (money == 0) cout << sum;
    else cout << -1;
}
