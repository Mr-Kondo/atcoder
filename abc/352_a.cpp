#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  if(X > Y){
    swap(X, Y);
    if(X < Z && Z < Y) cout << "Yes\n";
    else cout << "No\n";
  }else{
    if(X < Z && Z < Y) cout << "Yes\n";
    else cout << "No\n";
  }
  
  return 0;
}
