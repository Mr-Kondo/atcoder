#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<char> A(N*N);
  vector<char> B(N*N);
  
  int k = 0;
  rep(i,N){
    rep(j,N){
      //cout << i << ' ' << j << endl;
      cin >> A[k];
      k++;
    }
  }
  k=0;
  rep(i,N){
    rep(j,N){
      cin >> B[k];
      k++;
    }
  }
  /*
  k=0;
  rep(i,N){
    rep(j,N){
      cout << A[k];
      k++;
    }
  }
  */
  k=0;
  rep(i,N){
    rep(j,N){
      if(A[k] != B[k]) cout << i+1 << ' ' << j+1 <<'\n';
      k++;
    }
  }
  
  return 0;
}
