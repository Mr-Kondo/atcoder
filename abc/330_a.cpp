#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N, L;
  cin >> N >> L;
  int ans = 0;
  rep(i,N){
    int A;
    cin >> A;
    if(A >= L) ans++;
  }
  cout << ans << '\n';
  return 0;
}
