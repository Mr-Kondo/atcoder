#include <iostream>
using namespace std;
int main() {
    int X, A, B;
    cin >> X; cin >> A; cin >> B;
    int n = (X-A)/B;
    cout << X-A-n*B << endl;
    return 0;
}