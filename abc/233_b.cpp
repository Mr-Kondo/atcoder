#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int L, R;
  cin >> L >> R;
  string S;
  cin >> S;
  
  string Sub = S.substr(L-1, R-L+1);
  std::reverse(Sub.begin(), Sub.end());
  cout << S.substr(0, L-1) + Sub + S.substr(R);
  
  return 0;
}
