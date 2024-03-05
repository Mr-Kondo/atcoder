#include <iostream>
using namespace std;

int main() {
    unsigned int n = 0;
    cin >> n;


    if((double)n*log(2) > (double)2*log(n)){
        cout << "Yes" << endl;
        }
    else{
        cout << "No" << endl;
        }
    
    return 0;
}