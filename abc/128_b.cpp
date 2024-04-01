#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  
  vector<tuple<int, string, int>> tpl;
  
  rep(i,N){
    string s;
    int a;
    cin >> s >> a;
    tpl.push_back(make_tuple(i+1, s, a));
  }
  
  function cmp = [](const tuple<int, string, int> &x, const tuple<int, string, int> &y)-> bool{
    if (get<1>(x) != get<1>(y)) {
      return get<1>(x) < get<1>(y);  // stringを昇順に。
    }else{
      return get<2>(x) > get<2>(y);  // pointを降順に。
      }
    };

  sort(tpl.begin(), tpl.end(), cmp);
  rep(i, N) cout <<  get<0>(tpl[i]) << '\n';
  
  return 0;
}
