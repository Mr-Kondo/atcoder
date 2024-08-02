#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    vector<char> S((H+2)*(W+2));
    char c;
    
    rep(i,(H+2)*(W+2)){
        S.at(i) = '.';
    }

    // Boundary Setting
    // top and down 
    rep(i,W+2){
        S.at(0*(W+2)+i) = '#';
        S.at((H+1)*(W+2)+i) = '#';
    }
    // left and right
    rep(i,H+2){
        S.at((W+2)*i+0) = '#';
        S.at((W+2)*i+(W+1)) = '#';
    }


    for(int i = 1; i < H+1; i++){
        for(int j = 1; j < W+1; j++){
            cin >> c;
            S.at(i*(W+2)+j) = c;
        }       
    }
/*
    // Display
    rep(i,H+2){
        rep(j,W+2){
            cout << S.at(i*(W+2)+j);
        }
        cout << '\n';
    }
*/
    int ans = 1;
    // Search to up 
    for(int i = X; i >= 0; i--){
        if(S.at((W+2)*i+Y) == '.') ans++;
        else if(S.at((W+2)*i+Y) == '#') break;
    }
    // Search to down
    for(int i = X; i <= H+2; i++){
        if(S.at((W+2)*i+Y) == '.') ans++;
        else if(S.at((W+2)*i+Y) == '#') break;
    }
    // Search to left
    for(int i = Y; i >= 0; i--){
        if(S.at((W+2)*X+i) == '.') ans++;
        else if(S.at((W+2)*X+i) == '#') break;
    }
    // Search to right
    for(int i = Y; i <= W+2; i++){
        if(S.at((W+2)*X+i) == '.') ans++;
        else if(S.at((W+2)*X+i) == '#') break;
    }

    ans -= 4;
    cout << ans << endl;
    return 0;
}
