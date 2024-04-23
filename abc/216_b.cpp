#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;


int main() {
  int N;
  cin >> N;
  vector<pair<string, string>> data;
  rep(i,N){
    string S, T;
    cin >> S >> T;
    data.push_back(make_pair(S, T));
  }
  
  set<pair<string,string>> data2(data.begin(), data.end());
  
  if(data.size() == data2.size()) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
