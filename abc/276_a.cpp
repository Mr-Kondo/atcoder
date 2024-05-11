#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string s;
  cin >> s;
  int pos = s.rfind('a');
  if(pos == string::npos) cout << -1 << '\n';
  else cout << pos+1 << '\n';
  return 0;
}
