#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

// Refference
// 1. Qiita C++で文字列から特定の文字を削除する方法
//    "https://qiita.com/hryshtk/items/d5371e61f9f566a3cbdf"
// 2. 心配事100, "C++でSTRINGに入れた文字列の一部が大文字か小文字か判定する方法"
//    "https://shunichiro.net/2019/10/10/cでstringに入れた文字列の一部が大文字か小文字か判/"


bool isACorWA(string s){
   if(s[0] != 'A'){
    return false;
  }
  
    if(s[s.size()-1] == 'C'){
    return false;
  }
  
  string sub = s.substr(2, s.size()-3);
  if(sub.find('C') == string::npos){
    return false;
  }
  
  bool flag = false;
  rep(i, s.size()-1){
    if(s[i] == 'C'){
      if(flag == true){
        return false;
      }
      flag = true;
    }
  }
  
  // Erase 'A' and 'C' from input string.
  s.erase(remove(s.begin(),s.end(),'A'),s.end());
  s.erase(remove(s.begin(),s.end(),'C'),s.end());
  
  rep(i,s.size()){
    if(isupper(s[i])){
      return false;
    }
  }
  return true;
}


int main()
{
  string S;
  cin >> S;
  if(isACorWA(S)) cout << "AC" << '\n';
  else cout << "WA" << '\n';
  
  return 0;
}
