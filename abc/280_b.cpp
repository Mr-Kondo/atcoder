#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<long long> vec;
  for(int i=0; i<N; ++i){
    int tmp;
    cin >> tmp;
    vec.push_back(tmp);
  }
  
  for(int i=0; i<N; ++i){
    if(i == 0){ cout << vec[i]; continue;}
    cout << " " + to_string(vec[i]-vec[i-1]);
  }
  
  return 0;
}
