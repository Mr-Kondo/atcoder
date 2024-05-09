#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int H, W;
  cin >> H >> W;
  rep(i,H){
    rep(j,W){
      int A;
      cin >> A;
      if(A == 0) cout << '.';
      else cout << char(int('A')-1+A);
    }
    cout << '\n';
  }
}
