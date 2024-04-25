#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int X;
  cin >> X;
  if((int)(X/100) == 0 || X%100 != 0) cout << "No" << '\n';
  else cout << "Yes" << '\n';
  return 0;
}
