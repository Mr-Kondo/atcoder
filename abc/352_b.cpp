#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string S, T;
  cin >> S;
  cin >> T;
  int si = 0;　
  rep(j, T.size()){
    if(S[si] == T[j]){      // 二重ループを使わない
      cout << j+1 << ' ';   
      si++;                 // ここが肝！！
    } 
  }
  return 0;
}
