#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  int top = 0;
  int ans = 0;
  rep(i, N){
    int tmp=0;
    cin >> tmp;
    if(tmp >= top){
      ans++;
      top = tmp;
    } 
  }
  
  cout << ans << '\n';
  
  return 0;
}
