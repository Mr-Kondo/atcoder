#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// xのn乗
ll powpow(ll x, ll n) {
  if (n == 0) return 1;
  ll val = powpow(x, n / 2);
  val *= val;
  if (n % 2 == 1) val *= x;
  return val;
}

int main(){
  ll B;
  cin >> B;
  
  ll A = 0;
  bool flg = false;
  for(ll i=1; i<17; i++){
    A = powpow(i,i);
    if(B == A){
        flg = true;
        A = i;
        break;
    }else if(B < A) break;
  }
  if(flg == true) cout << A << '\n';
  else cout << -1 << '\n';

  return 0;
}
