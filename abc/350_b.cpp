#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  
    int N, Q;
    cin >> N >> Q;
    vector<bool> T(N); // false = 歯が生えている
    
    rep(i, Q){
      int tmp;
      cin >> tmp;
      if(T[tmp-1] == false) T[tmp-1] = true;
      else if(T[tmp-1] == true) T[tmp-1] = false;
    } 
    
    int ans = 0;
    rep(i, N){
      if(T[i] == false) ans++;
    }
    
    cout << ans << '\n';

    return 0;
}
