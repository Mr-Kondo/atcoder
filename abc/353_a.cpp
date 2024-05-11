#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);
  rep(i,N) cin >> H[i];
  int ans = 0;
  
  rep(i,N){
    if(H[0] < H[i]){
      ans = i; 
      break;
    }
  }
  
  if(ans == 0) cout << -1 <<'\n';
  else cout << ans + 1 <<'\n';
  return 0;
}
