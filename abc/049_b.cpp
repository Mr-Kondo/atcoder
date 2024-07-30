#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll INF = 1<<30;

int main()
{
    int H, W;
    cin >> H >> W;
    string str;
    getline(cin, str);
    rep(i,H){
        getline(cin, str);
        cout << str << '\n';
        cout << str << '\n';
    }
    return 0;
}
