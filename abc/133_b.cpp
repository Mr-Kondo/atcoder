#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, D;
  cin >> N >> D;
  vector<double> X(N*D);
  
  rep(i,N){
    rep(j,D){
      cin >> X[i*D + j];
    }
  }
  
  unsigned int ans = 0;
  double  distant;
  int     int_distant;
  for(int i=0; i<N; i++){
    for(int k=1; k<N-i; k++){
      distant = 0;
      int_distant = 0;
      for(int j=0; j<D; j++){
        distant += pow(X[(i+k)*D+j] - X[i*D+j], 2);
      }
      distant = sqrt(distant);
      //cout << distant <<'\n';
      int_distant = (int)distant;
      if((double)int_distant == distant) ans++;
    }
  }
  cout << ans;
  return 0;
}
