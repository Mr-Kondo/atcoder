#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int tmp;
  rep(i,26){
    cin >> tmp;
    char ch;
    ch = 'a' + tmp-1;
    cout << ch;
  }
  
  return 0;
}

