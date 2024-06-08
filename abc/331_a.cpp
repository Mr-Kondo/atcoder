#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int M, D;
  int y, m, d;
  cin >> M >> D;
  cin >> y >> m >> d;
  
  if(d+1>D){
    if(m+1>M){
      y +=1;
      m = 1;
    }
    else{ m +=1; }
    d = 1;
  }
  else { d += 1; }
  
  cout << y << ' ' << m << ' ' << d;
  
  return 0;
}
