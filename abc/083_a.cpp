#include <bits/stdc++.h>
using namespace std;

int main() {
  int A = 0, B = 0, C = 0, D = 0;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;
  if( A+B == C+D )
  {
    cout << "Balanced";
  }else if( A+B > C+D)
  {
    cout << "Left";
  } 
  else
  {
    cout << "Right";
  }
}
