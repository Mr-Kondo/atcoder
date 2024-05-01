#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int* split_digit_number(long long Num, int* Array, unsigned size){
    for(int i=0; i<(int)size; i++){
        long long digit = std::pow((double)10, (double)size-1-i);
        Array[i] = Num / digit;
        Num -= digit*Array[i];
    }
    return Array;
}

int main(){
  ll N;
  cin >> N;
  int* digit_N = new int((unsigned)(log10(N)+1));
  
  split_digit_number(N, digit_N, (unsigned)(log10(N)+1));
  
  bool flag = true;
  
  
  //rep(i, (int)log10(N)+1) cout << digit_N[i] << '\n';
  
  rep(i, (int)log10(N)+1){
    if(i==0) continue;
    if(digit_N[i] >= digit_N[i-1]){
      cout << "No" << '\n';
      flag = false;
      break;
    }
  }
  
  if(flag == true) cout << "Yes\n";
  
  
  return 0;
}
