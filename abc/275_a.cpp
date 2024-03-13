#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> vec;
  for(int i=0; i<N; ++i){
    long long tmp;
    cin >> tmp;
    vec.push_back(tmp);
  }
  
  int max = *std::max_element(vec.begin(), vec.end());
  
  for(int i=0; i<N; ++i){
    if(vec[i] == max){
      cout << i+1 << '\n';
      break;
    }
  }
  return 0;
}
