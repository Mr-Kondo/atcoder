#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S, T;
  cin >> S >> T;
  
  int ans = T.size();
  rep(i,S.size()-T.size()+1){
    //cout << i;
    int diff = 0;
    rep(j,T.size()){
      if(S[i+j] != T[j]) diff++;
    }
    ans = min(ans,diff);
  }
  //cout << '\n';
  cout << ans;
  return 0;
}
