#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll INF = 1<<30;

/**
 * This program finds the largest power of the form base^exponent that is less than or equal to x,
 * where base and exponent are positive integers, and exponent is at least 2.
 *
 * @param none
 * @return none
 */
int main()
{
    int x;
    cin >> x;

    int maxPow = -1;

    for (int base = 1; base <= 1000; ++base) {
        for (int exponent = 2; exponent <= 1000; ++exponent) {
            if (pow(base, exponent) > x) {
                break;
            }

            maxPow = max(maxPow, static_cast<int>(pow(base, exponent)));
        }
    }

    cout << maxPow << endl;

    return 0;
}
