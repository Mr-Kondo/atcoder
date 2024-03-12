#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  bitset<8> b2(B);
  
  for(int i=0; i<256; ++i){
    bitset<8> b1(A);
    bitset<8> b3(i);
    b1 = b1^b3;
    if(b1 == b2) cout << i << endl; 
  }

  return 0;
}
