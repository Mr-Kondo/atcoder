#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> data(N);
  rep(i, N-1) cin >> data[i];
  int sum = reduce(begin(data), end(data));
  cout << -sum << '\n';
  
  return 0;
}
