#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S;
  cin >> S;
  
  string rS = S;
  reverse(rS.begin(), rS.end());
  
  int ans = 0;
  rep(i,S.size()){
    if(S[i] != rS[i]) ans++;
  }
  
  cout << ans/2 <<'\n';
  
  return 0;
}
