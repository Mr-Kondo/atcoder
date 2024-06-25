#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<bool> A(N);
  int tmp = 0;
  
  rep(i,K){
    cin >> tmp;
    A.at(tmp-1) = true;
  }
  
  rep(i,Q){
    int count = 0;
    cin >> tmp;
    rep(j,N){
      if(A.at(j) == true){
        count++;
        if(count == tmp && j < N-1 && A.at(j+1) == false){
          A.at(j) = false;
          A.at(j+1) = true;
        }
      }
    }
  }
  
  rep(i,N){
      if(A.at(i) == true) cout << i+1 << ' ';
    }
  
  return 0;
}
