#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// 参考：http://vivi.dyndns.org/tech/cpp/binHex.html
// 数値を16進数文字列に変換
std::string to_hexString(unsigned int val, bool lower = true)
{
    if( !val )
        return std::string("0");
    std::string str;
    const char hc = lower ? 'a' : 'A';     // 小文字 or 大文字表記
    while( val != 0 ) {
        int d = val & 15;     // 16進数一桁を取得
        if( d < 10 )
            str.insert(str.begin(), d + '0');  //  10未満の場合
        else //  10以上の場合
            str.insert(str.begin(), d - 10 + hc);
        val >>= 4;
    }
    return str;
}

int main(){
  int N;
  cin >> N;
  if(N<16) cout << '0' << to_hexString(N, false) << '\n';
  else cout << to_hexString(N, false) << '\n';
  return 0;
}
