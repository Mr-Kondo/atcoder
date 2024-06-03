#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int H, W;
  cin >> H >> W;
  int *arr;
  arr = new int[H*W];
  
  char ch;
  rep(i,H){
    rep(j,W){
      cin >> ch;
      if(ch == '.')       arr[W*i+j] = 0;
      else if(ch == '#')  arr[W*i+j] = 1;
    }
  }
  
  int ans = 0;
  rep(i,H){
    rep(j,W){
      ans = 0;
      if(arr[W*i+j] == 1){ cout << '#'; continue; }
      for(int k=-1;k<=1;++k){
        for(int l=-1;l<=1;++l){
          if(i+k<0 || i+k>=H || j+l<0 || j+l>=W) continue;
          ans += arr[(i+k)*W+j+l];
        }
      }
      cout << ans;
      //cout << arr[i*W+j];
    }
    cout << '\n';
  }
  delete[] arr;
  arr = 0;
  return 0;
}
