#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  string S;
  int ans = 0;
  rep(i,N){
    cin >> S;
    if(S == "Takahashi") ans++;
  }
  
  cout << ans;
  return 0;
}
