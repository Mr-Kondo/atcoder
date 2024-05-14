#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  
  rep(i,N) cout << S[N-1-i] << '\n';
  
  return 0;
}
