#include <iostream>
#include<math.h>
using namespace std;
int main() {
    double N, X, T;
    cin >> N >> X >> T;
    cout << int(ceil(N/X)*T) << endl;
    return 0;
}