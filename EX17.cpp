#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  if(S == 0){
    cout << "0" << endl;
    return 0;
  }
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int ans = 0;
  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  for (int j = 0; j < N; j++) {
    for(int i = 0; i < N; i++) {
      if( A.at(j) + P.at(i) == S){
        ans++;
      }
    }
  }
  
  cout << ans << endl;
  return 0;
}
