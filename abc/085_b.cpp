#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N), vec2(N);
  for (int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
    
  for(int j = 1; j < N; j++){
    int dummy = 0;
    for(int i = 0; i < N; i++){
      if( vec.at(j) > vec.at(i)){
        dummy = vec.at(j);
        vec.at(j) = vec.at(i);
        vec.at(i) = dummy;
      }
    }
  }
  
  int count = 1;
  for(int i = 1; i < N; i++){
    if( vec.at(i-1) != vec.at(i)){
      count ++;
    }
  }
  
  cout << count << endl;
  
}
