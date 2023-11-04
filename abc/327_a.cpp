#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string str;
  cin >> N;
  cin >> str;
  bool flag = false;
  for(int i=0; i<N-1; i++){
    if(str.at(i) == 'a' && str.at(i+1) == 'b'){
        cout << "Yes" << endl;
        flag = true;
        break;
    }else if(str.at(i) == 'b' && str.at(i+1) == 'a'){
        cout << "Yes" << endl;
        flag = true;
        break;
    }
  }
  if(flag == false){cout << "No" << endl;}
  return 0;
}
