#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  
    string S;
    cin >> S;
    int Num = stoi(S.substr(3));
    if ( 0 < Num && Num <= 349 && Num != 316) {
      cout << "Yes\n";
    }else {
      cout << "No\n";
    }

    return 0;
}
