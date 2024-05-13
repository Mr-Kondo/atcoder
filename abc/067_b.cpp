#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> l(N);
  rep(i,N) cin >> l[i];
  
  sort(l.rbegin(), l.rend());
  
  int ans = 0;
  rep(i,K) ans += l[i];
  
  cout << ans << '\n';
  return 0;
}
