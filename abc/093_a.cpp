#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string S;
  cin >> S;
  size_t found_a = S.find('a');
  size_t found_b = S.find('b');
  size_t found_c = S.find('c');
  
  if(found_a != string::npos && found_b != string::npos & found_c != string::npos) cout << "Yes\n";
  else cout << "No\n";
  
  return 0;
}
