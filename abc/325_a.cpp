#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  
  str = str.substr(0, str.find(" ")-1);
  
  cout << str + " " + "san" << endl;

  return 0;
}
