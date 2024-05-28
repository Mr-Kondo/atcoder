#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S, T;
  cin >> S >> T;
  string str;
  rep(i, S.size()){
    if(S == T){ cout << "Yes" << '\n'; return 0;}
    str = S[S.size()-1];
    S.pop_back();
    S.insert(0, str);
  }
  
  cout << "No" << '\n';
  return 0;
}
