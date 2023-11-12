#include <iostream>
using namespace std;
int main() {
    int N, X, S;
    int sum = 0;
    cin >> N >> X;

    for(int i=0; i<N; i++){
        cin >> S;
        if(S <= X){sum += S;}
    }
    cout << sum << endl;
    return 0;
}