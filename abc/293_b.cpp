#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int K;
  cin >> K;
  vector<bool> X(K);
  int tmp;
  rep(i,K){
    cin >> tmp;
    if(X[i] == false){
      //cout << i+1 <<'\n';
      X[tmp-1] = true;
    } 
  }
  
  int count = 0;
  rep(i, K){
    if(X[i] == false) count++;
  }
  cout << count << '\n';
  
  rep(i,K){
    if(X[i] == false) cout << i+1 << ' ';
  }
  return 0;
}
