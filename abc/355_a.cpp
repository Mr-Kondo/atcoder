#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int A, B;
  cin >> A >> B;
  if((A == 1 && B == 2) || (A == 2 && B == 1)) cout << 3 <<'\n';
  else if((A == 2 && B == 3) || (A == 3 && B == 2)) cout << 1 <<'\n';
  else if((A == 1 && B == 3) || (A == 3 && B == 1)) cout << 2 <<'\n';
  else cout << -1 << '\n';
  
  return 0;
}
