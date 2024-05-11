#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// Ref : Official Editorial "https://blog.hamayanhamayan.com/entry/2018/11/07/190428"

constexpr double INF = 1<<30;

int main()
{
  int N, T, A;
  cin >> N;
  cin >> T >> A;
  vector<int> H(N);
  rep(i,N) cin >> H[i];
  
  double result = INF;
  
  int ans = 0;
  rep(i,N){
    double TH = (double)T - (double)(0.006*H[i]);
    //result = min(abs(result-(double)A), abs(TH-(double)A)); <- This makes WA!! 
    double check = abs(TH-A); // <- Which the Editrial showed.
    if(check < result){
      ans = i+1;
      result = check;
    }
  }
  
  cout << ans << '\n';
  return 0;
}
