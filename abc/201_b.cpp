#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<pair<int, string>> M;
  rep(i, N){
    string S;
    int T;
    cin >> S >> T;
    M.push_back(make_pair(T, S));
  }
  sort(M.rbegin(), M.rend());
  
  cout << M[1].second <<'\n';
  
  return 0;
}
