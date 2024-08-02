#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;
/**
 * Displays a 2D vector of characters as a grid.
 *
 * @param S The vector of characters representing the grid.
 * @param H The height of the grid.
 * @param W The width of the grid.
 *
 * @throws None.
 */
vector<char> Initialize(int H, int W){
    vector<char> S((H+2)*(W+2), '.');
    // Boundary Setting
    rep(i,W+2){
        S.at(0*(W+2)+i) = '#';      // Top Boundary
        S.at((H+1)*(W+2)+i) = '#';  // Down Boundary
    }
    rep(i,H+2){
        S.at((W+2)*i+0) = '#';      // Left Boundary
        S.at((W+2)*i+(W+1)) = '#';  // Right Boundary
    }
    // Input
    for(int i = 1; i < H+1; i++){
        for(int j = 1; j < W+1; j++){
            cin >> S.at(i*(W+2)+j);
        }       
    }
    return S;
}

void Display(vector<char> S, int H, int W){
    rep(i,H+2){
        rep(j,W+2){
            cout << S.at(i*(W+2)+j);
        }
        cout << '\n';
    }
}

int Search(vector<char> S, int H, int W, int X, int Y){
    int ans = 1;
    // Search to up 
    for(int i = X-1; i >= 1; i--){
        if(S.at((W+2)*i+Y) == '.') ans++;
        else if(S.at((W+2)*i+Y) == '#') break;
    }
    // Search to down
    for(int i = X+1; i <= H+1; i++){
        if(S.at((W+2)*i+Y) == '.') ans++;
        else if(S.at((W+2)*i+Y) == '#') break;
    }
    // Search to left
    for(int i = Y-1; i >= 1; i--){
        if(S.at((W+2)*X+i) == '.') ans++;
        else if(S.at((W+2)*X+i) == '#') break;
    }
    // Search to right
    for(int i = Y+1; i <= W+1; i++){
        if(S.at((W+2)*X+i) == '.') ans++;
        else if(S.at((W+2)*X+i) == '#') break;
    }

    return ans;
}
int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    // Initialize
    vector<char> S = Initialize(H, W);
    // Output
    cout << Search(S, H, W, X, Y) << endl;
    return 0;
}
