#include <iostream>
using namespace std;
int main(){
  int X = 0;
  cin >> X;
  if(X>0){
    if(X%100 == 0){ cout << "Yes" << endl;}
    else{ cout << "No" << endl;}
  }else cout << "No" << endl;
  return 0;
}