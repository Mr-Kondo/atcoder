#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<ll, int>> Cost(N);
  rep(i,N) cin >> Cost[i].first >> Cost[i].second;
  sort(Cost.begin(), Cost.end());
  
  ll Money = 0;
  int i=0;
  while(M > 0){
    if(M < Cost[i].second){
      Money += Cost[i].first * (ll)M;
    }else{
      Money += Cost[i].first * (ll)Cost[i].second;
    }
    M -= Cost[i].second;
    i++;
  }
  
  cout << Money << '\n';
  return 0;
}
