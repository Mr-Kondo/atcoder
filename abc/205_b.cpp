#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N;
  cin >> N;
  set<int> A;
  rep(i,N){
    int tmp;
    cin >> tmp;
    A.insert(tmp);
  }
  if(N == A.size()) cout << "Yes" << '\n';
  else cout << "No" << '\n';
  return 0;
}
