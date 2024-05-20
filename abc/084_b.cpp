#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

bool IsPostCode(int A, int B, string S){
  
  if(S.size() != A+B+1) return false;
  
  rep(i,S.size()){
    if(i == A){
      if(S[A] != '-')   return false;
    }
    else if(S[i]<'0' || S[i] > '9') return false;
  }
  
  return true;
}

int main()
{
  int A, B;
  cin >> A >> B;
  string S;
  cin >> S;
  
  if(IsPostCode(A, B, S)) cout << "Yes";
  else                    cout << "No";

  return 0;
}

