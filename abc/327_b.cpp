#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// 参考サイト
/*
 https://edo1z.hatenablog.com/2020/03/10/032523            edo1z blog：「繰り返し二乗（自乗）法」（C++ 累乗の速いやつ）
 https://programming-hiroba.com/abc327-b/                  プログラミングのひろば：16の16乗がBの最高値を超えるという発想 
 https://drken1215.hatenablog.com/entry/2023/11/05/014024  けんちょんの競プロ精進記録：コードの流れ
*/

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
  for(ll i=1; i<17; i++){ // 「ll i=0」で始めると B=1 のときに答えが0で出力されてしまう。 
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
