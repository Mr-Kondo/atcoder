#include <iostream>
using namespace std;

int main() {
  int num, a, b, c;
  cin >> num;
  
  a = num / 100;
  b = (num - a*100) / 10;
  c = (num - a*100 - b*10);
  
  cout << a+b+c << endl;
  
  return 0;
}
