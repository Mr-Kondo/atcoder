#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K;
  cin >> N;
  cin >> K;
  
  int i = 0;
  int d = 0;
  
  while (i < N){
    int x = 0;
    cin >> x;
    if( x < (K - x) ){
      d += x * 2;
    }else {
      d += (K - x) *2;
    }
    i++;
  }
  
  cout << d << endl;
}
