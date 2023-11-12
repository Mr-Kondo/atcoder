#include <iostream>
using namespace std;

int main() {
    int K, A, B;
    cin >> K;
    cin >> A >> B;
    int div_num = A/K;
    int i_num = div_num*K;
    bool flg = false;
    for(int i=i_num; i<B+1; i++){
        if(A<=i){
            if(i%K == 0){flg=true;}
        }
    }

    if(flg == true){cout << "OK" << endl;}
    else {cout << "NG" << endl;}
    return 0;
}