#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N, X;
  cin >> N >> X;
  int P;
  rep(i, N){
    cin >> P;
    if(P == X) cout << i+1 << ' ';
  } 
  return 0;
}
