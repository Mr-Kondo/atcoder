#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string S;
  cin >> S;
  bool flag = false;
  
  if(!isupper(S[0])){
    cout << "No" << '\n';
    return 0;
  }
  
  rep(i,S.size()){
    if(isupper(S[i])){
      if(flag == true){
        cout << "No" << '\n';
        return 0;
      }
      flag = true;
    }
  }
  
  if(flag)  cout << "Yes" << '\n';
  else      cout << "No" << '\n';

  return 0;
}

