#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

/* Refference
  C++ Do/While Loop, "https://www.w3schools.com/cpp/cpp_do_while_loop.asp"
*/

int main()
{
  string S;
  cin >> S;
  int mid = ceil((double)S.size()/2);
  
 do{
    S.pop_back();
    
    mid = ceil((double)S.size()/2);
    /*cout << "mid = " << mid <<'\n';
    cout << "S = " << S <<'\n';
    cout << "S.substr(0,mid) = " << S.substr(0,mid) << "\n";
    cout << "S.substr(mid) = " << S.substr(mid) << "\n";
    cout << '\n';*/
 }while(S.size()%2 != 0 || S.substr(0, mid) != S.substr(mid));
  
  cout << S.size() << '\n';

  return 0;
}
