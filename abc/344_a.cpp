#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  short cnt_1 = -9999;
  short cnt_2 = -9999;
  for(int i=0; i<str.size();++i){
    if(str[i] == '|'){
      if(cnt_1 >= 0){
        cnt_2 = i;
        break;
      }
      cnt_1 = i;
    }
  }
  
 if(cnt_1 != 0) cout << str.substr(0, cnt_1) + str.substr(cnt_2+1, str.size()-1); 
 else cout << str.substr(cnt_2+1, str.size()-1);
 return 0;
}
