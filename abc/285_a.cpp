#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  vector<pair<int, int>> vp(14);
  vp[0] = make_pair(1,2);
  vp[1] = make_pair(1,3);
  vp[2] = make_pair(2,4);
  vp[3] = make_pair(2,5);
  vp[4] = make_pair(4,8);
  vp[5] = make_pair(4,9);
  vp[6] = make_pair(5,10);
  vp[7] = make_pair(5,11);
  vp[8] = make_pair(3,6);
  vp[9] = make_pair(3,7);
  vp[10] = make_pair(6,12);
  vp[11] = make_pair(6,13);
  vp[12] = make_pair(7,14);
  vp[13] = make_pair(7,15);
  
  int a, b;
  cin >> a >> b;
  bool flag = false;
  rep(i,14){
    if((a == vp[i].first && b == vp[i].second) || (b == vp[i].first && a == vp[i].second)) flag = true;
  }
  
  if(flag == true) cout << "Yes\n";
  else cout << "No\n";
  
  return 0;
}
