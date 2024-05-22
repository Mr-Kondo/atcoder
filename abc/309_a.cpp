#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int A, B;
  cin >> A >> B;
  int row = ceil((double)A/3);
  //cout << row << '\n';
  if(B >= 1+3*(row-1) && B <= 3*row)  cout << "Yes" << '\n';
  else                                cout << "No" << '\n';

  return 0;
}
