#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  
  rep(i,10){
    rep(j,10){
      if(N == i*j) { cout << "Yes"; return 0;}
    }
  }
  cout << "No";
  return 0;
}
