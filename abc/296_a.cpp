#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N;
  string S;
  cin >> N >> S;
  int i = S.find("MM");
  int j = S.find("FF");
  if(i == string::npos && j == string::npos) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
