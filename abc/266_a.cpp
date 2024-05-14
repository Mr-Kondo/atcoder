#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
  string S;
  cin >> S;
  
  if(S.size() % 2 == 1) cout << S[(S.size()-1)/2] << '\n';
  else                  cout << S[(S.size()+1)/2] << '\n';
  return 0;
}
