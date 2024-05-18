#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
  ll H;
  cin >> H;
  cout << (int)(log2(H+1)+1) <<'\n';
  return 0;
}
