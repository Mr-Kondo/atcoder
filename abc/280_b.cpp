#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<ll> S(N);
  rep(i,N) cin >> S[i];
  
  vector<ll> A;
  rep(i,N){
    if(i==0) A.push_back(S[i]);
    else A.push_back(S[i] - reduce(begin(A), end(A)));
  }
  
  rep(i,N) cout << A[i] << ' ';
  return 0;
}
