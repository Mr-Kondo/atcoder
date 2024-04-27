#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int A, B;
  int sumA=0;
  rep(i,9){
    cin >> A;
    sumA += A;
  }
  int sumB=0;
  rep(i,8){
    cin >> B;
    sumB += B;
  }
  cout << sumA+1 - sumB;
  
  return 0;
}
