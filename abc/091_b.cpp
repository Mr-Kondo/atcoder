#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N;
  vector<string> vec1(N);
  for (int i = 0; i < N; i++){
    cin >> vec1.at(i);
  }
  
  cin >> M;
  vector<string> vec2(M);
  
  for (int i = 0; i < M; i++){
    cin >> vec2.at(i);
  }

  int ans = 0;
  
  for(int i = 0; i < N; i++){
    int ans1 = 0;
    string s = vec1.at(i);
    for (int j = 0; j < N; j++){
      if( s == vec1.at(j) ){
        ans1++;
      }
    }
    for (int j = 0; j < M; j++){
      if (s == vec2.at(j) ){
        ans1--;
      }
    }
    if ( ans < ans1 ){
      ans = ans1;
    }
  }
  
  cout << ans << endl;
}
