#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S;
  cin >> S;
  if(S.find("AC") == string::npos)  cout << "No" << '\n';
  else                              cout << "Yes" << '\n';
  return 0;
}
