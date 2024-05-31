#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int a, b;
  cin >> a >> b;
  
  vector<string> ss(2);
  rep(i,b) ss[0] += to_string(a);
  rep(i,a) ss[1] += to_string(b);
  
  sort(ss.begin(), ss.end());
  cout << ss[0] << '\n';
  
  return 0;
}
