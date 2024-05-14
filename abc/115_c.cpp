#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
  unsigned int N, K;
  cin >> N >> K;
  
  vector<ll> h(N);
  rep(i,N) cin >> h[i];
  
  sort(h.begin(), h.end());
  
  ll dh = INF;
  rep(i,N-(K-1)){
    ll min = h[i];
    ll max = h[i+K-1];
    //cout << "max= " << max << '\n';
    //cout << "min= " << min << '\n';
    if(max-min < dh) dh = max - min;
  }
  
  cout << dh << '\n';
  return 0;
}
