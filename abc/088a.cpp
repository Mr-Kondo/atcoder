#include <iostream>
using namespace std;
int main() {
    int N, A;
    cin >> N;
    cin >> A;

    int num = 0;
    num = N / 500;

    if(A >= N-num*500){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}