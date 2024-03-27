#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  string s;
  cin >> s;
  char c1 = s[0];
  char c2 = s[s.size()-1];
  string s3 = s.substr(1,6);
  
  //cout << s1 << ' ' << s2 << ' ' << s3 << '\n';
  if(s.size() == 8){
    if(isupper(c1) && isupper(c2) && stoi(s3)>=100000 && stoi(s3)<1000000 ) cout << "Yes";
    else{cout << "No";}
  }else {cout << "No";}
}
