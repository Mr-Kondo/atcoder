#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  vector<int> A(2*N);
  rep(i,2*N) cin >> A.at(i);
  
  int ans = 0;
  rep(i,2*N-2){
    if(A.at(i) == A.at(i+2) && A.at(i+1) != A.at(i)) ans++;
  }
  
  cout << ans << '\n';
  
  return 0;
}
