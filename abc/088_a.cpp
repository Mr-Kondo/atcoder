#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0, A = 0;
  cin >> N;
  cin >> A;
  if( N - N/500*500 <= A )
  {
    cout << "Yes";
  }else
  {
    cout << "No";
  } 
}
