#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll INF = 1<<30;

// Refference : アルゴ式, "約数列挙のアルゴリズム", "https://algo-method.com/descriptions/84"
// 公式解答："https://blog.hamayanhamayan.com/entry/2018/08/18/230559"　←　こちらは計算量がO(√N)

int main()
{
  int N;
  cin >> N;
  
  int ans = 0;
  rep(i,N){
    int count = 1;
    if((i+1)%2 == 1){
      rep(j,i){
        if((i+1)%(j+1) == 0){
          count++;
          if(count == 8){
            ans++;
            //cout << "i = " << i+1 << '\n';
          }
        }
      }
    }
  }
  
  cout << ans << '\n';
  return 0;
}

