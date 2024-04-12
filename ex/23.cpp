#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<unsigned int> data(N);
  rep(i, N) cin >> data[i];
  
  // 集計する
  unordered_map<unsigned int, size_t> hash;
  for(const auto &x : data){
      if(hash.find(x) != hash.end()){
          ++hash.at(x);
      }else{
          hash[x] = 1;
      }
  }
  // 最大値の要素のインデックスを取り出す
  auto max_iterator = max_element(hash.begin(), hash.end(),
      [](const auto &a, const auto &b) -> bool {
          return (a.second < b.second);
      }
  );
  unsigned int mode = max_iterator->first;
  unsigned int count = max_iterator->second;
  cout << mode << ' ' << count << '\n';

  return 0;
}
