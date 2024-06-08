#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S;
  cin >> S;
  int count = 0;
  rep(i, S.size()){
    if(isupper(S[i])) count++;
  }
  if(count > S.size()-count){ transform(S.begin(), S.end(), S.begin(),::toupper);}
  else                { transform(S.begin(), S.end(), S.begin(),::tolower);}
  
  cout << S << '\n';
  
  return 0;
}
