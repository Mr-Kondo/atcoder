#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// Reffernce : Qiita,"Vectorの平均値と中央値を求める", https://qiita.com/kajitack/items/aaf4721c55e372de3c20"

int main()
{
  int N;
  cin >> N;
  
  vector<int> d(N);
  rep(i,N) cin >> d[i];
  
  sort(d.begin(), d.end());
  
  int median = 0;
  if(d.size()%2 == 1) median = d[N/2];
  else                median = d[((N/2-1) + N/2) / 2];
  
  int median_next = 0;
  if(d.size()%2 == 1) median_next = d[N/2 + 1];
  else                median_next = d[((N/2-1) + N/2) / 2 + 1];
  
  
  int ans = median_next - median;
  
  cout << ans << '\n';
  return 0;
}
