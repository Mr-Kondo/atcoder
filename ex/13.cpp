#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  int ave = 0;
  rep(i,N){
    cin >> A[i];
    ave += A[i];
  } 
  ave = floor(ave/N);
  rep(i,N) cout << abs(A[i]-ave) << '\n';
  
  return 0;
}
