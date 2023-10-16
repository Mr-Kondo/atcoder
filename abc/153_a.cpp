#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, A;
  cin >> H >> A;
  if( H <= A ) { cout << 1 << endl;}
  else{
    int Ans = H/A;
    if( A*Ans >= H){cout << Ans << endl;}
    else{ cout << Ans+1 << endl;}
  }
  return 0;
}