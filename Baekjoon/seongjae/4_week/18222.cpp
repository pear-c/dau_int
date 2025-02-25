#include <iostream>
using namespace std;

int kth_bit(long long n) {
    int result = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            result = 1 - result;
        }
        n = (n + 1) / 2;
    }

    return result;
}

int main() {
    long long n;
    cin >> n;

    cout << kth_bit(n);

    return 0;
}
