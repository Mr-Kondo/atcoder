#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  vector<string> Str = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
  string S;
  cin >> S;
  bool flag = false;
  rep(i,Str.size()){
    if(S == Str[i]){
      cout << "Yes\n";
      flag = true;
      break;
    }
  }
  if(flag == false) cout << "No\n";
  return 0;
}
