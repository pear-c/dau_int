#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int money = 0;
    cin >> money;

    // 준현과 성민이가 구입한 주식 수
    int jh = 0, sm = 0;
    // 준현 돈과 성민 돈
    int jh_m = money, sm_m = money;

    int today;
    // 첫째날 준현이만 구매
    cin >> today;
    jh += int(money / today);
    jh_m -= int(money / today) * today;

    int yesterday = today;
    // 3일 연속 하락, 상승 체크
    int down = 0, up = 0;

    for (int i = 0; i < 13; i++) {
        cin >> today;

        // 일단 준현이 있는대로 구매
        jh += int(jh_m / today);
        jh_m -= int(jh_m / today) * today;

        // 상승함
        if (yesterday < today) {
            down = 0; // 지금까지 연속된 값 초기화
            up++;
        }
        // 하락함
        else if (yesterday > today) {
            up = 0; // 지금까지 연속된 값 초기화
            down++;
        }
        // 3일 연속 상승했을 경우, 매도
        if (up >= 3) {
            sm_m += sm * today;
            sm = 0;
        }
        // 3일 연속 하락했을 경우, 매수
        else if (down >= 3) {
            sm += int(sm_m / today);
            sm_m -= int(sm_m / today) * today;
        }

        yesterday = today;
    }

    // 내기
    jh_m += jh * today;
    sm_m += sm * today;

    if (jh_m > sm_m) cout << "BNP" << '\n';
    else if (jh_m < sm_m) cout << "TIMING" << '\n';
    else cout << "SAMESAME" << '\n';

    return 0;
}
