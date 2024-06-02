#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int A, B;
  cin >> A >> B;
  int ans;
    rep(i,2){
    if(A >= B){
      ans += A;
      A--;
    }else{
      ans += B;
      B--;
    }
  }
  cout << ans;
  return 0;
}
