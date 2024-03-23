#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  vector<int> A(N);
  for (int i=0; i<N; ++i){
    cin >> A.at(i);
  }
  for (int i=0; i<N-1; ++i){
    cout << A.at(i)*A.at(i+1) << " ";
  }
  return 0;
}
