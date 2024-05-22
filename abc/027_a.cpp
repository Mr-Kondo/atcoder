#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  std::array<int, 3> l;
  rep(i,3) cin >> l[i];
  
  int min = *min_element(begin(l), end(l));
  int max = *max_element(begin(l), end(l));
  
  int site_length = min*2 + max*2;
  rep(i,3) site_length -= l[i];
  cout << site_length << '\n';
  
  return 0;
}
