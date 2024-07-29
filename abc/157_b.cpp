#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

bool IsThreeMarked(vector<int>& A, int N){
    rep(i,9){
        if(A.at(i) == N) A.at(i) = 0;
    }

    if(A.at(0) == 0 && A.at(1) == 0 && A.at(2) == 0) return true;
    else if(A.at(3) == 0 && A.at(4) == 0 && A.at(5) == 0) return true;
    else if(A.at(6) == 0 && A.at(7) == 0 && A.at(8) == 0) return true;

    if(A.at(0) == 0 && A.at(3) == 0 && A.at(6) == 0) return true;
    else if(A.at(1) == 0 && A.at(4) == 0 && A.at(7) == 0) return true;
    else if(A.at(2) == 0 && A.at(5) == 0 && A.at(8) == 0) return true;

    if(A.at(0) == 0 && A.at(4) == 0 && A.at(8) == 0) return true;
    else if(A.at(2) == 0 && A.at(4) == 0 && A.at(6) == 0) return true;
    
    return false;
}
int main()
{
    vector<int> A(9);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> A.at(i*3+j);
            //cout << A.at(i*3+j) << '\n';
        }
    }

    int N;
    cin >> N;
    int tmp;
    rep(i,N){
        cin >> tmp;
        if(IsThreeMarked(A, tmp)) {cout << "Yes" << endl; return 0;}
    }

    cout << "No" << endl;
    return 0;
}
