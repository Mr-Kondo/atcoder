#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    unsigned int n = 0;
    cin >> n;


    if((double)n*log(2) > (double)2*log(n)){
        cout << "Yes" << endl;
        }
    else{
        cout << "No" << endl;
        }
    
    return 0;
}
