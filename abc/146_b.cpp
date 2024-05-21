#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  
  char ch;
  rep(i, S.size()){
    ch = 'A' + (S[i] - 'A' + N) % 26;
    cout << ch;
  }  
  
  return 0;
}
