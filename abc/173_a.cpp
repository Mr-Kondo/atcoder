#include <math.h>
#include <iostream>
using namespace std;

int main() {
    double N = 1900; //ceil関数を使うときは小数点型で定義する必要がある
    cin >> N;
    double num = ceil(N/1000);
    cout << N-int(num*1000) << endl;
    return 0;
}