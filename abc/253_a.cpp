#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    vector<int> v;

    for(int i=0; i<3;++i){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int b = v[1];
    sort(v.begin(), v.end());

    if(b == v[1]){cout << "Yes" << endl;}
    else{cout << "No" << endl;}

    return 0;
}
