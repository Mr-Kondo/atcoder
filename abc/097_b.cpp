#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
constexpr ll INF = 1<<30;

int main()
{
    int x;
    cin >> x;
    int max = -1;
    
    for(int i = 1; i <= 1000; i++){
        for(int j = 2; j <= 1000; j++){
            if(pow(i,j) > x) continue;
            if(pow(i,j) >= max) max = pow(i,j);
        }
    }

    cout << max << endl;
    
    return 0;
}
