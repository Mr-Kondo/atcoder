#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long X;
    cin >> X;
    long long Y = 100;
    int i = 0;
    while(Y<X){
        Y += Y/100;
        i++;
    }
    cout << i << endl;
    return 0;
}