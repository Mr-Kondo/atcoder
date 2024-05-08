#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string S;
  cin >> S;
  bool flag = false;
  if(S[0] == '<' && S[S.size()-1] == '>') flag = true;
  rep(i,S.size()-2) {
    if(S[i+1] != '=') flag = false;
  }
  if(flag == true) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
