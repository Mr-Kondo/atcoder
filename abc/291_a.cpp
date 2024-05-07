#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string S;
  cin >> S;
  rep(i, S.size()){
    if(isupper(S[i])) cout << i+1 << '\n';
  }
  return 0;
}
