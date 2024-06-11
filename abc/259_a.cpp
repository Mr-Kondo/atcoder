#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, M, X, T, D;
  cin >> N >> M >> X >> T >> D;
  
  for(int i = N; i > M; i--){
    if(i > X && i <= N) T -= 0;
    else T -= D;
  }
  
  if(T>1) cout << T;
  else    cout << 1;
  return 0;
}
