#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<unsigned int> A(N);
  rep(i, N) cin >> A[i];
  int Q;
  cin >> Q;
  rep(i,Q){
    int Q1;
    cin >> Q1;
    if(Q1 == 1){
      int Q2, Q3;
      cin >> Q2 >> Q3;
      A[Q2-1] = Q3;
    }else if(Q1 == 2){
      int Q2;
      cin >> Q2;
      cout << A[Q2-1] << '\n';
    }
  }
  return 0;
}
