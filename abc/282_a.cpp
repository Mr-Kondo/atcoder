#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int K;
  cin >> K;
  char ch;
  rep(i,K) {
    ch = 'A' + i;
    cout << ch;
  }
  return 0;
}
