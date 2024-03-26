#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  
  string s;
  cin >> s;
  
  char ch = 'T';
  int count = std::count(s.begin(), s.end(), ch);
  if(count > N-count) cout << "T";
  else if(count < N-count) cout << "A";
  else{
    count = 0;
    count = std::count(s.begin(), s.end()-1, ch);
    if(count > N-1-count) cout << "T";
    else if(count < N-1-count) cout << "A";
  }

  return 0;
}
