#include<iostream>
using namespace std;
int main(){
  int A, B  = 0;
  cin >> A >> B;
  if(B%A == 0){
    cout << B+A << endl;
  }else{
    cout << B-A << endl;
  }
  
  return 0;
}