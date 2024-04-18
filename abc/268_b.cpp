#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  string S;
  string T;
  cin >> S;
  cin >> T;
  if (T.starts_with(S)) {
   puts("Yes");
  }else puts("No");
  return 0;
}
