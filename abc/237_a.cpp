#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  ll N;
  cin >> N;
  ll A = pow(2,31)-1;
  ll B = pow(-2, 31);
  if(B<=N && N<=A){
   cout << "Yes" << '\n';
  }else{
    cout << "No" << '\n';
  }
  return 0;
}
