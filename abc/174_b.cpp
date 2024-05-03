#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int N, D;
    cin >> N >> D;
    
    int count = 0;
    rep(i,N){
      ll X = 0,  Y = 0;
      cin >> X >> Y;
      if(sqrt(X*X+Y*Y)<=(double)D) count++;
    }
    
    cout << count << '\n';
    return 0;
}
