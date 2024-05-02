#include <bits/stdc++.h>
using namespace std;

int main() {
  int num = 0;
  char c;
  cin >> num;
  for (int i = 0; i < num; i++) {
    cin >> c;
    if(c == 'Y'){
      cout << "Four";
      break;
    }else if(i == num -1) {
      cout << "Three";
      break;
    }
  }
}
