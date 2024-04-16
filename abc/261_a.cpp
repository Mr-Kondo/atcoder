#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;
  int N = 101;
  vector<bool> Red(N);
  vector<bool> Blue(N);
  
  rep(i,N) if(L1<=i && i<=R1) Red[i] = true;
  rep(i,N) if(L2<=i && i<=R2) Blue[i] = true;
  
  //rep(i, N) cout << "i=" << i <<"  Red = " << Red[i] << " Blue = " << Blue[i] << endl;
  
  int count = 0;
  
  rep(i,N){
    if(Red[i] == true && Blue[i] == true) count++;
  }
  if(count <= 0) cout << 0 << '\n';
  else cout << count-1 << '\n';
  
  return 0;
}
