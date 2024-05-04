#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> m(N);
  rep(i, N) cin >> m[i];
  
  sort(m.begin(), m.end());
  
  int ans = 0;
  rep(i, N){
    if(X - m[i] > 0){
      ans++;
      X -= m[i];
    }
  }
  if(0 < X) ans += floor(X/m[0]);
  cout << ans << '\n';
  
  return 0;
}
