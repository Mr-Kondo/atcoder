#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, d;
  cin >> a >> b >> d;
  
  double rot_x = a*cos(M_PI * d / 180) - b*sin(M_PI * d / 180);
  double rot_y = a*sin(M_PI * d / 180) + b*cos(M_PI * d / 180);
  cout << fixed << setprecision(7);
  
  cout << rot_x << ' ' << rot_y << '\n';
  
}
