#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  rep(i,N){
    if((i+1)%3 == 0)  cout << 'x';
    else              cout << 'o';
  } 
  
  return 0;
}
