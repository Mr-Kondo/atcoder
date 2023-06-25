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
  
  int Alice = 0;
  int Bob   = 0;
  
  for(int i = 0; i < N; i++){
    if( i%2 == 0){
      Alice += vec.at(i);
    }else{
      Bob   += vec.at(i);
    }
  }
  
  cout << Alice - Bob << endl;
