#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string s;
  cin >> s;
  rep(i,s.size()){
    if(s[i] == '0'){cout << '1';}
    else if(s[i] == '1'){cout << '0';}
  }
  
  return 0;
}
