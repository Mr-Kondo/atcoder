#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
  int N;
  cin >> N;
  vector<pair<string, int>> User(N);
  int T = 0;
  rep(i,N){
    cin >> User[i].first >> User[i].second;
    T += User[i].second;
  }
  
  sort(User.begin(), User.end());
  
  cout << User[T%N].first << '\n';
  
  return 0;
}
