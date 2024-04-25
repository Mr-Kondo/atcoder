#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N,S,K;
  cin >> N >> S >> K;
  
  int P,Q;
  int sum = 0;
  rep(i,N){
    cin >> P >> Q;
    sum += P*Q;
  }
  if(sum >= S) K=0;
  cout << sum+K << '\n';
  
  return 0;
}
