#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)
using ll = long long;

int main() {
  int N;
  cin >> N;
  
  vector<ll> L(N+1);
  L[0] = 2; L[1] = 1;
  
  for(int i=2; i<N+1; ++i) L[i] = L[i-2]+L[i-1];
  cout << L[N] << '\n';
  return 0;
}
