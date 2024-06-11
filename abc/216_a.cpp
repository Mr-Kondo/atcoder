#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  double tmp;
  cin >> tmp;
  double X = floor(tmp);
  double Y = tmp - X;
  
  if((int)(Y*10) >= 0 && (int)(Y*10) <= 2) cout << (int)X << '-';
  else if((int)(Y*10) >= 3 && (int)(Y*10) <= 6) cout << (int)X;
  else if((int)(Y*10) >= 7 && (int)(Y*10) <= 9) cout << (int)X << '+';
  
  return 0;
}
