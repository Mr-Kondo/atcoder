#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N, K;
  cin >> N >> K;
  queue<int> A;
  
  rep(i, N){
    int tmp;
    cin >> tmp;
    A.push(tmp);
  }
  
  int ans = 0;
  int iK = K;
  while(!A.empty()){
    iK = iK - A.front();
    A.pop();
    if(iK < A.front()){
      ans++;
      iK = K;
    }
  }
  ans++;
  
  cout << ans << '\n';
  return 0;
}
