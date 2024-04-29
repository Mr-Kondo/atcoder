#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  
  rep(i,N) cin >> A[i];
  sort(A.begin(), A.end());
  
  int Alice = 0; int Bob = 0;
  rep(i,N){
    if(i%2 == 0) Alice += A[i];
    else Bob += A[i];
  }
  
  cout << abs(Alice-Bob) << '\n';
  
  return 0;
}
