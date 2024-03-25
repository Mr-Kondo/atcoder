#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  
  vector<pair<unsigned int, unsigned int>> p;
  rep(i,N){
      unsigned int a, b;
      cin >> a >> b;
      p.push_back(make_pair(b, a));
  }
  sort(p.begin(), p.end());
  
  rep(i,N) cout << p[i].second << " " << p[i].first << '\n';
}
