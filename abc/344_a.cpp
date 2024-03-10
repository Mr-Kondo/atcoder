#include <bits/stdc++.h>
using namespace std;

int main() {
  
 string str;
 cin >> str;
 cout << str.substr(0, str.find('|', 0)) + str.substr(str.rfind( '|', str.size())+1, str.size());
   
 return 0;
}
