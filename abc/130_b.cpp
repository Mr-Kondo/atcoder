// 参考"https://blog.hamayanhamayan.com/entry/2019/06/17/205556"
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;


int main()
{
  int N, X;
  cin >> N >> X;
  
  int L = 0;
  int D = 0;
  int ans = 1;
  
  rep(i,N){
    cin >> L;
    D += L;
    if(X < D){
      break;
    }
    ans++;
  }
  
  cout << ans << '\n';
  return 0;
}
