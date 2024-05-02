#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

long long convert_to_base_K_num_to_decimal(long long N, int K){
    long long return_num = 0;
    int itr = 0;
    while(N!=0){
        return_num += N%10 * pow(K, itr);
        N /= 10;
        itr++;
    }
    return return_num;
}

int main(){
  int K;
  cin >> K;
  ll A, B;
  cin >> A >> B;
  cout << convert_to_base_K_num_to_decimal(A, K)*convert_to_base_K_num_to_decimal(B, K) << '\n';
  return 0;
}
