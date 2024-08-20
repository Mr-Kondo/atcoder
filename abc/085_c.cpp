#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll INF = 1<<30;

/**
 * Finds the numbers i, j, and k that satisfy the equation:
 * 10000 * i + 5000 * j + 1000 * k = Y
 *
 * @param none
 * @return none
 */
int main()
{
    // Read input from stdin
    int N, Y; // N is the maximum value of i, j, and k
    cin >> N >> Y;

    // Iterate over possible values of i
    for(int i = 0; i <= N; i++){
        // Iterate over possible values of j
        for(int j = 0; j <= N - i; j++){
            // Calculate k based on the equation
            int k = N - i - j;
            // Check if the equation is satisfied
            if(10000 * i + 5000 * j + 1000 * k == Y){
                // Print the solution and exit
                cout << i << ' ' << j << ' ' << k << endl;
                return 0;
            }
        }
    }
    // If no solution is found, print -1 -1 -1
    cout << "-1 -1 -1" << endl;
    return 0;
}
