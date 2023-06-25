#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ave;
  
  vector<int> vec(N);
  for (int i = 0; i < vec.size(); i++) {
    cin >> vec.at(i);
    ave += vec.at(i); 
  }
  
  ave /= vec.size();
  
  for (int i = 0; i < vec.size(); i++) {
    cout << abs(vec.at(i) - ave) << endl;
  }
  
}
