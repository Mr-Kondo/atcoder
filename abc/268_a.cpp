#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  set<int> st;
  int tmp;
  while(cin){
    cin >> tmp;
    st.insert(tmp);
  }
  cout << st.size();
  return 0;
}
