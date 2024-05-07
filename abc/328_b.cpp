#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<int> D(N);
  int ans = 0;
  rep(i,N) cin >> D[i];
  rep(i,N){
    rep(j,D[i]){
      string date = to_string(j+1)+to_string(i+1);
      if(size(set<char>(date.begin(), date.end())) == 1) ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
