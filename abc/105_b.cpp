#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  int doughnuts = 0;
  int cakes = 0;
  
  rep(i,26){
    rep(j,15){
      if(7*j+4*i == N){ cout << "Yes"; return 0;}
    }
  }
  
  cout << "No";
  return 0;
}
