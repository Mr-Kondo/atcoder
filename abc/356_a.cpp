#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, L, R;
  cin >> N >> L >> R;
  rep(i,N){
    if(i+1 < L || i+1 > R) cout << i+1 << ' ';
    else if(i+1 >= L) cout << R - (i+1 - L) << ' ';
  }
  return 0;
}
