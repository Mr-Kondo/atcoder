#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, M;
  cin >> N >> M;
  int H;
  int ans = 0;
  rep(i, N){
    cin >> H;
    M -= H;
    if(M >= 0) ans++; 
  }
  cout << ans << '\n';
  return 0;
}
