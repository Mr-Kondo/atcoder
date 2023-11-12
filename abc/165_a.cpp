#include <iostream>
using namespace std;

int main() {
    int K, A, B;
    cin >> K;
    cin >> A >> B;
    bool flg = false;
    for(int i=A; i<=B; ++i){
        if(i%K == 0){flg=true;}
    }
    if(flg){cout << "OK" << endl;}
    else {cout << "NG" << endl;}
    return 0;
}