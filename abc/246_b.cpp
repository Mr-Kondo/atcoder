#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int A, B;
  cin >> A >> B;
  double d = (double)A * (double)A + (double)B * (double)B;
  cout << setprecision(7) << (double)A/sqrt(d) << ' ' << (double)B/sqrt(d);
  
  return 0;
}
