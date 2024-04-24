#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// https://blog.hamayanhamayan.com/entry/2019/09/04/220545

int main(){
  int A, B;
  cin >> A >> B;
  cout << (int)ceil((float)(B-1)/(float)(A-1))<<'\n';
  return 0;
}
