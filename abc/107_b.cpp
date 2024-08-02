#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

vector<char> Input(int H, int W){
    vector<char> a(H*W, '.');
    for (int j = 0; j < H; j++){
        for (int i = 0; i < W; i++){
            cin >> a.at(j*W+i);
        }
    }
    return a;
}

vector<int> Search_Row(vector<char> a, int H, int W){
    // Search row
    bool flag;
    vector<int> rows;
    for (int j = 0; j < H; j++){
        flag = false;
        for (int i = 0; i < W; i++){
            if (a.at(j*W+i) == '#'){
                flag = true;
                continue;
            }
        }
        if (flag) rows.push_back(j);
    }
    return rows;
}

vector<int> Search_Column(vector<char> a, int H, int W){
    // Search column
    bool flag;
    vector<int> cols;
    for (int i = 0; i < W; i++){
        flag = false;
        for (int j = 0; j < H; j++){
            if (a.at(j*W+i) == '#'){
                flag = true;
                continue;
            }
        }
        if (flag) cols.push_back(i);
    }
    return cols;
}

void Display(vector<int> rows, vector<int> cols){
    rep(i,rows.size()){cout << "H = " << rows.at(i)+1 << endl;}
    rep(i,cols.size()){cout << "W = " << cols.at(i)+1 << endl;}
}

void Output(vector<char> a, int H, int W, vector<int> rows, vector<int> cols){
    for(int j = 0; j < rows.size(); j++){
        for (int i = 0; i < cols.size(); i++){
            cout <<  a.at(rows.at(j)*W+cols.at(i));
        }
        cout << '\n';
    }
}
int main()
{
    int H, W;
    cin >> H >> W;
    vector<char> a = Input(H, W);
    vector<int> rows = Search_Row(a, H, W);
    vector<int> cols = Search_Column(a, H, W);

    //Display(rows, cols);
    Output(a, H, W, rows, cols);
    return 0;
}
