#include <bits/stdc++.h>
using namespace std;

int func(int n) {
  if (n == 0) {
    return 1;
  }

  int s = func(n - 1);
  return s * n;
}

int main() {
  int N;
  cin >> N;
  cout << func(N) << endl;
}
