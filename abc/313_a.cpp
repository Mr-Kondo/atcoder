#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<int> P(N);
  rep(i,N) cin >> P[i];
  
  if(N>1){
    int max = *std::max_element(P.begin()+1, P.end());
    if(max < P[0]) cout << 0 << '\n';
    else cout << max-P[0]+1 << '\n';
  }else cout << 0 << '\n';
  
  return 0;
}
