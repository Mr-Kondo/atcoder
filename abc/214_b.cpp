#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int S, T;
  cin >> S >> T;
  int ans = 0;
  rep(i,101){
    rep(j,101){
      rep(k,101){
        if(i+j+k <= S && i*j*k <= T) ans++;
      }
    }
  }
  cout << ans;
  return 0;
}
