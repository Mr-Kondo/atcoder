#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S, T;
  cin >> S >> T;
  if(S == T){cout << "Yes"; return 0;}
  string copy_S, copy_T;
  copy_S = S;
  copy_T = T;
  
  char ch;
  rep(i,S.size()-1){
      S = copy_S;
      T = copy_T;
      ch = S[i];
      S[i] = S[i+1];
      S[i+1] = ch;
      //cout << "S = " << S << '\n';
      if(S == T){cout << "Yes"; return 0;}
  }
  
  cout << "No";
  return 0;
}
