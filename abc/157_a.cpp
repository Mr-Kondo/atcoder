// ABC 157 A - Duplex Printing
// "https://atcoder.jp/contests/abc157/tasks/abc157_a"

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll INF = 1<<30;

int main(int argc, char* argv[]){
    int N;
    cin >> N;
    // Since each sheet can hold 2 pages, the number of sheets needed is the ceiling of N/2.
    // Using integer arithmetic, we can compute that as (N + 1) / 2.
    int sheets = (N + 1) / 2;
    cout << (N+1)/2 << endl;
}