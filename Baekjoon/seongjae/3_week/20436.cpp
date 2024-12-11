#include <bits/stdc++.h>

using namespace std;

struct Position {
    int x, y;
};

int calc(Position a, Position b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 0: 왼손, 1: 오른손
    map<char, bool> hand;
    hand['q'] = false;
    hand['w'] = false;
    hand['e'] = false;
    hand['r'] = false;
    hand['t'] = false;
    hand['a'] = false;
    hand['s'] = false;
    hand['d'] = false;
    hand['f'] = false;
    hand['g'] = false;
    hand['z'] = false;
    hand['x'] = false;
    hand['c'] = false;
    hand['v'] = false;
    hand['y'] = true;
    hand['u'] = true;
    hand['i'] = true;
    hand['o'] = true;
    hand['p'] = true;
    hand['h'] = true;
    hand['j'] = true;
    hand['k'] = true;
    hand['l'] = true;
    hand['b'] = true;
    hand['n'] = true;
    hand['m'] = true;

    map<char, Position> munPos;
    munPos['q'] = {0, 0};
    munPos['w'] = {0, 1};
    munPos['e'] = {0, 2};
    munPos['r'] = {0, 3};
    munPos['t'] = {0, 4};
    munPos['a'] = {1, 0};
    munPos['s'] = {1, 1};
    munPos['d'] = {1, 2};
    munPos['f'] = {1, 3};
    munPos['g'] = {1, 4};
    munPos['z'] = {2, 0};
    munPos['x'] = {2, 1};
    munPos['c'] = {2, 2};
    munPos['v'] = {2, 3};
    munPos['y'] = {0, 5};
    munPos['u'] = {0, 6};
    munPos['i'] = {0, 7};
    munPos['o'] = {0, 8};
    munPos['p'] = {0, 9};
    munPos['h'] = {1, 5};
    munPos['j'] = {1, 6};
    munPos['k'] = {1, 7};
    munPos['l'] = {1, 8};
    munPos['b'] = {2, 4};
    munPos['n'] = {2, 5};
    munPos['m'] = {2, 6};

    char initLeft, initRight;
    cin >> initLeft >> initRight;
    Position leftHand = munPos[initLeft], rightHand = munPos[initRight];

    int sum = 0;
    string input;
    cin >> input;
    for (auto &in: input) {
        if (!hand[in]) {
            // 왼손일 경우
            sum += calc(leftHand, munPos[in]);
            leftHand = munPos[in];
        } else {
            // 오른손일 경우
            sum += calc(rightHand, munPos[in]);
            rightHand = munPos[in];
        }
        sum++;
    }

    cout << sum;

    return 0;
}
