#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  
  sort(A.begin(), A.end());
 
  vector<int> C(N+M);
  rep(i,N) C[i] = A[i];
  rep(i,M) C[N+i] = B[i];
 
  sort(C.begin(), C.end());
  
  rep(i,N+M-1){
    rep(j, N-1){
      if(A[j] == C[i] && A[j+1] == C[i+1]){
        cout << "Yes" << '\n';
        return 0;
      }
    }
  }
  
  cout << "No" << '\n';
  return 0;
}
