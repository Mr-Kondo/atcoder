#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int tmp = 0;
  rep(i,N){
    cin >> tmp;
    if(tmp == A+B) cout << i+1 << '\n';
  }
  return 0;
}
