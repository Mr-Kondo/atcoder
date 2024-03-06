#include <iostream>
using namespace std;
int main(){
  short N = 0;
  string str;
  cin >> N;
  cin >> str;
  short cnt = 0;
  bool A = false;
  bool B = false;
  bool C = false;
  for(int i = 0; i < N; ++i){
    if(str.at(i) == 'A') A =true;
    if(str.at(i) == 'B') B =true;
    if(str.at(i) == 'C') C =true;
    if(A == true && B == true && C == true){
      cnt = i+1;
      break;
    }
  }
  cout << cnt << endl;
  return 0;
}