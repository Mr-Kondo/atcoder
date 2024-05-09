#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// Ref "https://www.youtube.com/watch?v=p92To1h16-k&t=872s"

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
