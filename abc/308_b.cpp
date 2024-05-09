#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// Ref "https://www.youtube.com/watch?v=p92To1h16-k&t=872s"

int main()
{
  int N, M;
  cin >> N >> M;
  
  vector<string> C(N);
  rep(i,N) cin >> C[i];
  
  vector<string>D(M+1);
  rep(i, M) cin >> D[i+1]; // Point!!
  
  vector<int> P(M+1);
  rep(i, M+1) cin >> P[i];
  
  map<string, int> Map;
  rep(i, M) Map[D[i+1]] = P[i+1]; //Point!!
  
  int sum = 0;
  rep(i,N){
    if(Map.count(C[i])) sum += Map.at(C[i]);
    else sum += P[0];
  }
  
  cout << sum << '\n';
  return 0;
}
