#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> Status(N);
  int tmp, x;
  vector<bool> IsThereRemoved(N);
  
  rep(i,Q){
    cin >> tmp >> x;
    x -= 1;
    if(tmp == 1){
      if(IsThereRemoved[x] == false){
        Status[x] += 1;
        if(Status[x] == 2){
          IsThereRemoved[x] = true;
        }
      }
    }
    else if(tmp == 2){ IsThereRemoved[x] = true;}
    else if(tmp == 3){
      if(IsThereRemoved[x] == false)      cout << "No" << '\n';
      else if(IsThereRemoved[x] == true)  cout << "Yes" << '\n';
    }
  }
  return 0;
}
