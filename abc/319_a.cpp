#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  vector<pair<string, int>> S;
  S.push_back(make_pair("tourist", 3858));
  S.push_back(make_pair("ksun48", 3679));
  S.push_back(make_pair("Benq", 3658));
  S.push_back(make_pair("Um_nik", 3648));
  S.push_back(make_pair("apiad", 3638));
  S.push_back(make_pair("Stonefeang", 3630));
  S.push_back(make_pair("ecnerwala", 3613));
  S.push_back(make_pair("mnbvmar", 3555));
  S.push_back(make_pair("newbiedmy", 3516));
  S.push_back(make_pair("semiexp", 3481));
  
  string str;
  cin >> str;
  rep(i,10){
    if(S[i].first == str){
      cout << S[i].second << '\n';
      break;
    }
  }

  return 0;
}
