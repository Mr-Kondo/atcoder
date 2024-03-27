#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  string s;
  cin >> s;
  string s1 = s.substr(s.find('x')-1, 1);
  string s2 = s.substr(s.rfind('x')+1, 1);
  cout << stoi(s1)*stoi(s2);
  return 0; 
}
