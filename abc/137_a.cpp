#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  
  vector<int> v;
  v.push_back(A+B);
  v.push_back(A-B);
  v.push_back(A*B);
  
  cout << *max_element(v.begin(), v.end()) << endl;
  
  return 0;
}