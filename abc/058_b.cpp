#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  string O;
  string E;
  cin >> O >> E;
  int Size = O.size() + E.size();
  
  int j=0; int k = 0;
  rep(i,Size){
    if((i+1)%2 == 1){ cout << O[j]; j++; }
    else            { cout << E[k]; k++; }
  }
  return 0;
}
