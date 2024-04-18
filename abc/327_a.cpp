#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    int N;
    string str;
    
    cin >> N;
    cin >> str;
    
    int i = str.find("ab");
    int j = str.find("ba");
    
    if(i != std::string::npos || j != std::string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
